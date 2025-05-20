#include <iostream>
#include <algorithm>  // Needed for std::max()
using namespace std;

// Best Time Complexity is O(n)
int findLargestElement(int arr[], int n) {
 
    int max = arr[0];
    for (int i = 0; i < n; i++) {
      if (max < arr[i]) {
        max = arr[i];
      }
    }
    return max;
  }

int main() {
    int a[5] = {1, 2, 3, 4, 5}; 
    cout << "Largest element: " << findLargestElement(a, 5) << endl; 
    return 0;
    /*
    Output:
    5
    */
}
