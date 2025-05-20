#include <bits/stdc++.h>
using namespace std;

// Average Time Complexity: O(n^3)
int getLongestSubarray(vector<int> &a, long long k)
{
    int n = a.size(); // Get the size of the array
    int len = 0;      // Variable to store the maximum length

    // Iterate over all possible starting indices
    for (int i = 0; i < n; i++)
    {

        // Iterate over all possible ending indices
        for (int j = i; j < n; j++)
        {

            long long s = 0; // Variable to store the sum of subarray

            // Compute the sum of elements from index 'i' to 'j'
            for (int p = i; p <= j; p++)
            {
                s += a[p];
            }

            // If sum matches k, update the maximum length
            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    return len; // Return the maximum subarray length
}

int main()
{
    vector<int> a = {10, 2, -2, -20, 10};
    int k = -10;
    cout << "Longest subarray length (both positive & negative): "
         << longestSubarrayWithSumK(a, k) << endl;
    return 0;
    /*
    Output:
    Longest subarray length (both positive & negative): 4
    */
}
