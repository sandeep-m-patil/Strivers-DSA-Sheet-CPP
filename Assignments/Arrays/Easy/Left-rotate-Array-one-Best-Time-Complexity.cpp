
#include <bits/stdc++.h>
using namespace std;

// Best Time Complexity is O(n)
void leftRotate(vector<int> &nums, int k)
{
    int n = nums.size();

    // Reverse all expect 1st element
    reverse(nums.begin() + 1, nums.end());

    // Reverse the entire array
    reverse(nums.begin(), nums.end());
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 1; // Rotate left by 1

    leftRotate(nums, k);

    // Print rotated array
    for (int num : nums)
    {
        cout << num << " ";
    }
    /*Output:
    2 3 4 5 1
    */
    return 0;
}
