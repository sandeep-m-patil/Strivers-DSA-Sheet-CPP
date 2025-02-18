#include <iostream>
#include <algorithm>  // Needed for std::max()
using namespace std;

// Best Time Complexity is O(n)
int largest(int arr[], int n) {
    int l = 0, h = n - 1;  // Two-pointer approach: l starts from 0, h from n-1
    int maxVal = arr[0];   // Initialize maxVal with the first element

    // Iterate until both pointers meet
    while (l <= h) {
        maxVal = max(maxVal, arr[l++]);  // Compare and update maxVal with arr[l], then increment l
        maxVal = max(maxVal, arr[h--]);  // Compare and update maxVal with arr[h], then decrement h
    }

    return maxVal;  // Return the maximum value found
}

int main() {
    int a[5] = {1, 2, 3, 4, 5}; 
    cout << "Largest element: " << largest(a, 5) << endl; 
    /*
    Output:
    5
    */
    return 0;
}
