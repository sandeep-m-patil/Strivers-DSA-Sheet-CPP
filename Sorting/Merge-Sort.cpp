#include <iostream>
#include <vector>
using namespace std;

// Function to merge two sorted halves
void merge(vector<int>& arr, int left, int mid, int right) {
    // Sizes of two halves
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Temporary arrays
    vector<int> L(n1), R(n2);

    // Copy data
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];

    // Merge temp arrays back into arr
    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }

    // Copy remaining elements
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

// Merge Sort function
// Time Complexity: O(n log n)
// Space Complexity: O(n)
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Recursively sort left and right halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge them
        merge(arr, left, mid, right);
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

    mergeSort(arr, 0,arr.size()-1); // Sort the array

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

Algorithm: Merge Sort

Step 1: Divide the array into two halves.
Step 2: Recursively sort each half.
Step 3: Merge the two sorted halves back together.

*/