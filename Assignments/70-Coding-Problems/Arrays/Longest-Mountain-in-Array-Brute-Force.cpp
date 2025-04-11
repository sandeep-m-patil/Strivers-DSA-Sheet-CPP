#include <iostream>
#include <vector>
using namespace std;

// Worst time complexity: O(N^2)
int longestMountain(vector<int> &arr)
{
    int n = arr.size(), maxLen = 0;

    for (int i = 1; i < n - 1; i++)
    { // Peak must be between [1, n-2]
        if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
        { // Check if it's a peak
            int left = i - 1, right = i + 1;

            // Move left while increasing
            while (left > 0 && arr[left - 1] < arr[left])
                left--;

            // Move right while decreasing
            while (right < n - 1 && arr[right] > arr[right + 1])
                right++;

            // Update maxLen
            maxLen = max(maxLen, right - left + 1);
        }
    }

    return (maxLen >= 3) ? maxLen : 0;
}

int main()
{
    vector<int> arr = {2, 1, 4, 7, 3, 2, 5};
    cout << "Longest Mountain Length: " << longestMountain(arr) << endl;
    return 0;

    /*
    Ouput:
    Longest Mountain Length: 5
    */
}
