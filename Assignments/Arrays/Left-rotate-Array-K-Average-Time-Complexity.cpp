#include<bits/stdc++.h>
using namespace std;

// Average Time Complexity is O(n*k)
void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n; // Handle cases where k is greater than the array length

    for (int i = 0; i < k; i++) {  // Repeat k times
        int last = nums[n - 1];  // Store the last element
        for (int j = n - 1; j > 0; j--) {
            nums[j] = nums[j - 1];  // Shift elements to the right
        }
        nums[0] = last;  // Move last element to the front
    }
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotate(nums, k);

    // Print rotated array
    for (int num : nums) {
        cout << num << " ";
    }
    
    return 0;

    /*Output: 
    5 6 7 1 2 3 4 
    */
}
