#include <iostream>
#include <vector>
using namespace std;

// Insertion Sort Function
// Time Complexity: O(n²)
// Space Complexity: O(1)
void insertionSort(vector<int> &arr, int n)
{
    // Base case: If the array has one or no elements, it's already sorted
    if (n <= 1)
        return;

    // Sort the first n-1 elements
    insertionSort(arr, n - 1);

    // Insert the last element at its correct position in the sorted part of the array

    int last = arr[n - 1];
    int j = n - 2;

    // Move elements of arr[0..n-2], that are greater than last, to one position ahead
    while (j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }

    // Place the last element at its correct position
    arr[j + 1] = last;
}

// Main Function
int main()
{
    vector<int> arr = {64, 25, 12, 22, 11};

    cout << "Original array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    insertionSort(arr, 5); // Sort the array

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

Algorithm: Insertion Sort Recursive

step 1 : Initialize the array and its size.
step 2 : If the array has one or no elements, return (base case).
step 3 : Recursively call insertionSort for the first n-1 elements.
step 4 : Store the last element in a variable.
step 5 : Initialize a variable j to n-2 (the index of the last element in the sorted part).
step 6 : Move elements of arr[0..n-2], that are greater than the last element, to one position ahead.
step 7 : Place the last element at its correct position in the sorted part of the array.
step 8 : Continue until the entire array is sorted.

*/
