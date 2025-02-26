#include<bits/stdc++.h>
using namespace std;

// Average Time Complexity is O(n*log n)
int sortArr(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}
 
int main() {
    vector<int> arr= {2,5,1,3,0};
    cout << "Largest element: " << sortArr(arr) << endl; 
    
    return 0;

    /*
    Output:
    5
    */
}

