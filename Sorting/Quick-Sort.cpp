#include <iostream>
#include <vector>
using namespace std;

// Partition function (using first element as pivot)
// Time Complexity: O(n log n) on average, O(n^2) in the worst case
// Space Complexity: O(log n) for recursive stack space
int partition(vector<int>& arr, int low, int high) {

    int pivot = arr[low]; // First element as pivot
    int i = low + 1;
    int j = high;

    while (i <= j) {
        while (i <= high && arr[i] <= pivot) i++;
        while (j >= low && arr[j] > pivot) j--;
        if (i < j) swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]); // Place pivot at correct position
    return j;
}

// Quick Sort function
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);
        quickSort(arr, low, p - 1);  // Sort left part
        quickSort(arr, p + 1, high); // Sort right part
    }
}

// Main Function
int main()
{
    vector<int> arr = {64, 25, 12, 22, 11};

    cout << "Original array: ";
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    quickSort(arr,0, 4); // Sort the array

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

Algorithm: Quick Sort

step 1 : Initialize the array and its size.
step 2 : Choose a pivot element (first element in this case).
step 3 : Partition the array into two parts:
         - Elements less than or equal to the pivot
         - Elements greater than the pivot
step 4 : Recursively apply quick sort to the left and right parts.
step 5 : Continue until the entire array is sorted.
step 6 : Print the sorted array.

*/