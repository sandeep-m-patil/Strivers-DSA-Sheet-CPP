#include <bits/stdc++.h>
using namespace std;

// Best Time Complexity: O(n)
int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size(); // Get the size of the array
    int start = 0;    // Left pointer of the window
    long long currentSum = 0; // Variable to store the sum of the current window
    int maxLen = 0;   // Variable to store the maximum length

    // Iterate over the array with the right pointer 'i'
    for (int i = 0; i < n; i++) {
        currentSum += a[i]; // Add the current element to the sum
        
        // If sum exceeds k, shrink the window from the left
        while (currentSum > k && start <= i) {
            currentSum -= a[start]; // Remove elements from the start
            start++; // Move the left pointer forward
        }
        
        // If sum equals k, update maxLen
        if (currentSum == k) {
            maxLen = max(maxLen, i - start + 1);
        }
    }
    
    return maxLen; // Return the maximum subarray length
}

int main()
{
    vector<int> a = {2, 3, 5, 1, 9}; // Input array
    long long k = 10; // Target sum
    int len = getLongestSubarray(a, k); // Get the longest subarray length
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
