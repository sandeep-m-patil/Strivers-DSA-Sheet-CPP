#include <bits/stdc++.h>
using namespace std;

// Worst time complexity: O(N^2)
int missingNumber(vector<int>& a, int N) {

    // Outer loop to check for missing number from 1 to N
    for (int i = 1; i <= N; i++) {
        bool found = false;  // Flag to check if 'i' exists in the array

        // Inner loop: Linear search for number 'i' in the array
        for (int j = 0; j < N - 1; j++) {
            if (a[j] == i) {
                found = true;  // Mark as found
                break;
            }
        }

        // If 'i' is not found in the array, it is the missing number
        if (!found) {
            return i;
        }
    }

    // This line will never execute, added just to avoid compiler warnings
    return -1;
}

// Main function
int main() {
    int N = 5;  // The range [1, N]
    vector<int> a = {5, 4, 2, 1};  // Given array with one missing number

    // Function call to find the missing number
    int ans = missingNumber(a, N);

    // Output the result
    cout << "The missing number is: " << ans << endl;
    
    return 0;

    /*
    Output:
    The missing number is: 3
    */
}
