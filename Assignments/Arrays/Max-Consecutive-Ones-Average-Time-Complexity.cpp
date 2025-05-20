#include <bits/stdc++.h>
using namespace std;

// Average Time Complexity: O(n^2)
int findMaxConsecutiveOnes(vector<int>& nums) {
    int maxCount = 0;  // To store the maximum sequence of 1s found
    int n = nums.size();  // Get the size of the array
    
    // Outer loop to pick the starting index
    for (int i = 0; i < n; i++) { 
        int count = 0;  // To count consecutive 1s from index i
        
        // Inner loop to check consecutive 1s from index i to j
        for (int j = i; j < n; j++) { 
            if (nums[j] == 1) {
                count++;  // Increase count if it's 1
            } else {
                break;  // Stop counting when we find a 0
            }
        }
        
        maxCount = max(maxCount, count);  // Update maxCount if a larger sequence is found
    }
    
    return maxCount;
}

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};  // Example input
    int ans = findMaxConsecutiveOnes(nums);
    cout << "The maximum consecutive 1's are " << ans;
    return 0;

    /*
    Output:
    The maximum consecutive 1's are 3
    */
}
