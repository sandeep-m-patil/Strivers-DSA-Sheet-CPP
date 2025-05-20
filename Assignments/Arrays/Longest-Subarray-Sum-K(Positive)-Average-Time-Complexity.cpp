#include <bits/stdc++.h>
using namespace std;

// Average Time Complexity: O(n^3)
int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size(); // Get the size of the array
    int len = 0;      // Variable to store the maximum length

    // Iterate over all possible starting indices
    for (int i = 0; i < n; i++) { 
        
        // Iterate over all possible ending indices
        for (int j = i; j < n; j++) { 
            
            long long s = 0; // Variable to store the sum of subarray
            
            // Compute the sum of elements from index 'i' to 'j'
            for (int p = i; p <= j; p++) {
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
    vector<int> a = {2, 3, 5, 1, 9}; // Input array
    long long k = 10; // Target sum
    int len = getLongestSubarray(a, k); // Get the longest subarray length
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;

    /*
    Output:
    The length of the longest subarray is: 3
    */
}
