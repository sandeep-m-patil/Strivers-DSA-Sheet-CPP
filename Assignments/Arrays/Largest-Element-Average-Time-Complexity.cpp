#include <iostream>
#include <algorithm>  // For std::max()
using namespace std;

// Best Time Complexity is O(n) [inefficient]
int largest(int arr[], int n) {
    int maxVal = arr[0];  // Initialize maxVal with the first element

    // Loop through the array and update maxVal
    for (int i = 1; i < n; i++) {
        maxVal = max(maxVal, arr[i]);  // Compare and store the maximum value
    }

    return maxVal;  // Return the maximum element
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
