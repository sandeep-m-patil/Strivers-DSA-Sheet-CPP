
#include<bits/stdc++.h>
using namespace std;

// Average Time Complexity is O(n)
void solve(int a[], int n) {
    int temp[n];
    for (int i = 1; i < n; i++) {
      temp[i - 1] = arr[i];
    }
    temp[n - 1] = arr[0];
    for (int i = 0; i < n; i++) {
      cout << temp[i] << " ";
    }
}
int main() {
  int n=5;
  
  int arr[]= {1,2,3,4,5};
  solve(arr, n);
  /*Output:
  2 3 4 5 1 
  */

}

