#include <bits/stdc++.h>
using namespace std;

// Average Time Complexity is O(n)
int search(int arr[],int n,int k)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        return i;
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int k = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    int val = search(arr,n,k);
    if(k!=-1)cout<<val;
    else cout<<"Element not found";
    /*
    Output:3 ( index )
    */
}