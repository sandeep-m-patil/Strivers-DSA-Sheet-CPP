#include<iostream>
using namespace std;

int main(){
	int a[10]={-5,3,6,8,-1,9,0,-3,-7,12};
	int n=10;
	for(int i=0;i<n-1;i++){
        for(int j=1;j<n-1-i;j++){
            if(a[j]>a[j+1])swap(a[j],a[j+1]);
        }
	}

	for(int i:a)cout<<i<<" ";
}
