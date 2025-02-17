#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Corrected Partition Function
int partition(int a[], int low, int high) {
    int pivot = a[high];  // Pivot element
    int i = low-1;  // Index of smaller element

    for (int j = low; j < high; j++) {
        if (a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[high]);  // Move pivot to the correct position
    return (i + 1);  // Return pivot index
}

// QuickSort Function
void quickSort(int a[], int low, int high) {
    if (low < high) {
        int p = partition(a, low, high);  // Get pivot position
        quickSort(a, low, p - 1);  // Sort left sub-array
        quickSort(a, p + 1, high);  // Sort right sub-array
    }
}

int main() {
    int a[10] = {-5, 3, 6, 8, -1, 9, 0, -3, -7, 12};
    int n = 10;

    quickSort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
