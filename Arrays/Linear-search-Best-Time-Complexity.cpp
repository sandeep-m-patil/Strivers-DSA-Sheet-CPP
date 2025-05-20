#include <bits/stdc++.h>
using namespace std;

// Best Time Complexity is O(log n)
int search(vector<int>v,int n,int k)
{
    return binary_search(v.begin(), v.end(), k);
}

int main() {
    vector<int> v = {1, 3, 6, 8, 9};
    int k = 8;

    if (search(v,5,k))
        cout << k << " is Present" ;
    else
        cout << k << " is NOT Present";
    return 0;
    /*Output:
    8 is Present
    */
}
