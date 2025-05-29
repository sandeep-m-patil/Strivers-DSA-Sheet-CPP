#include <iostream>
#include <vector>
using namespace std;

// Selection Sort Function
// Time Complexity: O(n²)
// Space Complexity: O(1)
void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
                index = j;
        }
        swap(arr[i], arr[index]);
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

    selectionSort(arr, 5); // Sort the array

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

Algorithm: Selection Sort

step 1 : Initialize the array and its size.
step 2 : Loop through the array from the first to the second last element.
step 3 : For each element, find the index of the minimum element in the unsorted part of the array.
step 4 : Swap the found minimum element with the first element of the unsorted part.
step 5 : Repeat until the array is sorted.

*/