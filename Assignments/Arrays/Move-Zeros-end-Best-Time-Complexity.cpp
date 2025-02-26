#include <bits/stdc++.h>
using namespace std;

// Best Time Complexity is O(n)
void moveZeros(vector<int>& nums) {
    int j = 0; // Pointer to track the position of non-zero elements

    // Traverse the array and move non-zero elements to the front
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[j]); // Swap non-zero with the leftmost zero
            j++; // Move pointer for next non-zero element
        }
    }
}

int main()
{
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;
    moveZeros(arr);
    for (auto i : arr) {
        cout << i << " ";
    }

    /*
    Output: 
    1 2 3 2 4 5 1 0 0 0 
    */
    return 0;
}


