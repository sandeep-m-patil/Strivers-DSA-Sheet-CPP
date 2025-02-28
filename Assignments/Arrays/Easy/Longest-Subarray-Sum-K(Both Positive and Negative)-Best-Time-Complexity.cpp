#include <bits/stdc++.h>
using namespace std;

// Best Time Complexity: O(n)
int longestSubarrayWithSumK(vector<int>& a, int k) {
    unordered_map<int, int> prefixSumIndex; // Stores (prefix sum, first index)
    int sum = 0, maxLen = 0;

    for (int i = 0; i < a.size(); i++) {
        sum += a[i]; // Update prefix sum

        if (sum == k) 
            maxLen = i + 1; // If subarray from 0 to i has sum k

        if (prefixSumIndex.find(sum - k) != prefixSumIndex.end()) {
            maxLen = max(maxLen, i - prefixSumIndex[sum - k]);
        }

        if (prefixSumIndex.find(sum) == prefixSumIndex.end()) {
            prefixSumIndex[sum] = i; // Store first occurrence of sum
        }
    }

    return maxLen;
}

int main() {
    vector<int> a = {10, 2, -2, -20, 10};
    int k = -10;
    cout << "Longest subarray length: " << longestSubarrayWithSumK(a, k) << endl;
    return 0;
    /*
    Output:
    Longest subarray length (both positive & negative): 4
    */
}
