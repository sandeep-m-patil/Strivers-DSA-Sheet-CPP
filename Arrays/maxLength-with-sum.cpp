#include <iostream>
using namespace std;

int main() {
    int a[6] = {5, 8, 14, 2, 4, 12};
    int k=6;
    int n=6,start=0,currentSum=0,maxLen=0;
    for(int i=0;i<n;i++){
        currentSum+=a[i];
        while(currentSum>k && start<=i)currentSum-=a[start++];
        if(currentSum == k)maxLen=max(maxLen,i-start+1);
    }
    cout<<maxLen;

    return 0;
}

