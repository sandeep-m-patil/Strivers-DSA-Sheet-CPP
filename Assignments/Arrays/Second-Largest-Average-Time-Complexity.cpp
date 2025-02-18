#include<bits/stdc++.h>  // Includes standard libraries like iostream, vector, etc.
using namespace std;

// Best Time Complexity is O(n log n)
int secondLargest(int arr[], int n)
{
    // Check if array size is 0 or 1, then second largest doesn't exist
    if(n == 0 || n == 1) {
        return -1;  // Return -1 as second largest is not possible
    }

    // Sort the array in ascending order (by default)
    sort(arr, arr + n);

    // After sorting, the second largest element will be at index n-2
    return arr[n - 2];  // Return the second largest element
}

int main()
{
    // Example array
    int arr[] = {1, 8, 9, 4, 6, 7, 5};

    // Calculate the number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Output the second largest element
    cout << "Second largest is " << secondLargest(arr, n);

    return 0;
}
