#include<bits/stdc++.h>
using namespace std;

// Best Time Complexity is O(n)
bool isSorted(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i - 1])
      return false;
  }

  return true;
}

int main() {

    int arr[] = {1, 2, 3, 4, 5}, n = 5;
    bool ans = isSorted(arr, n);
    if (ans) cout << "True" << endl;
    else cout << "False" << endl;
    /*
    Output:
    True
    */
    return 0;

}

