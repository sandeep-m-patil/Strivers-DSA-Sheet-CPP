#include<iostream>
using namespace std;

int main(){
    int a[10]={121,7,14,-3,8,19,100,2,31,-2};
    int n=10;
    int l=0,h=n-1;
    int maxVal=a[0];
    while(l<=h){
        maxVal = max(maxVal, a[l++]);
        maxVal = max(maxVal, a[h--]);
    }
    cout<<maxVal;
}
