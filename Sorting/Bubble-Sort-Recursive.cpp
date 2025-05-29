#include <iostream>
#include <vector>
using namespace std;

// Bubble Sort function
// Time Complexity: O(n²)
// Space Complexity: O(1)
void bubbleSort(vector<int> &arr, int n)
{
    // Base case: If the array has one or no elements, it's already sorted
    if (n == 1)
        return;

    // Perform one pass of bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }

    // Recursively call bubbleSort for the remaining elements
    bubbleSort(arr, n - 1);
}

// Main Function
int main()
{
    vector<int> arr = {64, 25, 12, 22, 11};

    cout << "Original array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    bubbleSort(arr, 5); // Sort the array

    cout << "Sorted array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;

    /*
    Output:
    Original array: 64 25 12 22 11
    Sorted array: 11 12 22 25 64
    */
}

/*

Algorithm: Bubble Sort Recursive

step 1 : Initialize the array and its size.
step 2 : If the array has one or no elements, return (base case).
step 3 : Loop through the array from the first to the second last element.  
step 4 : For each element, compare it with the next element.
step 5 : If the current element is greater than the next element, swap them.
step 6 : Recursively call bubbleSort for the remaining elements (n - 1).
step 7 : Continue until the entire array is sorted.

*/