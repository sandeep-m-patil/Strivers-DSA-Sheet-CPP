#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int i = left, j = mid + 1;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            i++;
        } else {
            int value = arr[j];
            int index = j;


            while (index > i) {
                arr[index] = arr[index - 1];
                index--;
            }
            arr[i] = value;
            i++; mid++; j++;
        }
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right); // In-place merge
    }
}

int main() {
    int arr[10] = {-5, 3, 6, 8, -1, 9, 0, -3, -7, 12};
    int n=10;
    mergeSort(arr, 0, n - 1);

    for (int i : arr) cout << i << " ";

    return 0;
}
