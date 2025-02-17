#include <iostream>
using namespace std;

int main() {
    int a[6] = {-5, 8, -14, 2, 4, 12};

    int n=6,sum=0,currentSum=0,maxLen=0;
    for(int end=0;end<n;end++){
        currentSum+=a[end];
        while(currentSum>k && start<=end)currentSum-=a[start++];
        if(currentSum == k)maxLen=max(maxLen,end-start+1);
    }
    cout<<maxLen;

    return 0;
}

