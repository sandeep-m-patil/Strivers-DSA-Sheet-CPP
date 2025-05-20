#include <bits/stdc++.h>
using namespace std;

// Best Time Complexity: O(n)
int findMaxConsecutiveOnes(vector<int> &nums) {
    int maxCount = 0, count = 0; // maxCount stores the max sequence, count keeps track of current 1s sequence
    
    for (int i : nums) { // Iterate through each element in the array
        if (i == 1) { 
            count++; // Increase count when encountering a 1
        } else {
            count = 0; // Reset count if a 0 is encountered
        }
        maxCount = max(maxCount, count); // Update maxCount if the current sequence is longer
    }
    
    return maxCount; // Return the longest sequence of consecutive 1s
}

int main() {
    // Sample input array
    vector<int> nums = {1, 1, 1, 1, 0, 1, 1, 1, 1, 1};
    
    // Call the function and store the result
    int ans = findMaxConsecutiveOnes(nums);
    
    // Output the result
    cout << "The maximum consecutive 1's are " << ans << endl;
    
    return 0;

    /*
    Output:
    The maximum  consecutive 1's are 5
    */
}
