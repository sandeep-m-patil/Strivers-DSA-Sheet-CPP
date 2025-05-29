#include <iostream>
#include <vector>
using namespace std;

// Bubble Sort function
// Time Complexity: O(n²)
// Space Complexity: O(1)
void bubbleSort(vector<int>& arr,int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
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

Algorithm: Bubble Sort

step 1 : Initialize the array and its size.
step 2 : Loop through the array from the first to the second last element.
step 3 : For each element, compare it with the next element.
step 4 : If the current element is greater than the next element, swap them.
step 5 : Repeat until the array is sorted.

*/