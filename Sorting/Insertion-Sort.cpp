#include <iostream>
#include <vector>
using namespace std;

// Insertion Sort Function
// Time Complexity: O(n²)
// Space Complexity: O(1)
void insertionSort(vector<int>& arr,int n) {
    for (int i = 0; i < n; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            swap(arr[j - 1], arr[j]);
            j--;
        }
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

Algorithm: Insertion Sort

step 1 : Initialize the array and its size.
step 2 : Loop through the array from the first to the last element.
step 3 : For each element, compare it with the previous elements.
step 4 : If the current element is smaller than the previous element, swap them.
step 5 : Repeat until the current element is in the correct position.
step 6 : Continue until the entire array is sorted.

*/
