#include<bits/stdc++.h>  // Includes all standard libraries like iostream, vector, etc.
using namespace std;

// Best Time Complexity is O(n)
int secondLargest(int arr[], int n)
{
    if (n < 2) return -1;  // If the array has fewer than 2 elements, return -1 (no second largest element)

    int largest = arr[0], secondLargest = -1;  // Initialize largest and secondLargest to the first element and -1 respectively

    // Iterate through the array starting from index 1
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {  // If the current element is larger than the largest
            secondLargest = largest;  // The current largest becomes the second largest
            largest = arr[i];  // Update largest to the current element
        } 
        else if (arr[i] > secondLargest && arr[i] < largest) {  // If the current element is smaller than largest but larger than secondLargest
            secondLargest = arr[i];  // Update secondLargest to the current element
        }
    }

    // If no second largest element is found, return -1
    return secondLargest; 
}

int main()
{
    int arr[]={1,8,9,4,6,7,5};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array

    // Call the function and output the second largest element
    cout << "Second largest is " << secondLargest(arr, n);
    return 0;
}
