
#include<bits/stdc++.h>
using namespace std;

// Best Time Complexity is O(n)
void leftRotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n; // Handle cases where k > n

    // Reverse first k elements
    reverse(nums.begin(), nums.begin() + k);
    
    // Reverse remaining n-k elements
    reverse(nums.begin() + k, nums.end());

    // Reverse the entire array
    reverse(nums.begin(), nums.end());
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 3; // Rotate left by 3

    leftRotate(nums, k);

    // Print rotated array
    for (int num : nums) {
        cout << num << " ";
    }
    
    return 0;

    /*Output: 
    5 6 7 1 2 3 4 
    */
}
