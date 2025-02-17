#include<iostream>
using namespace std;

int main(){
	int a[10]={-5,3,6,8,-1,9,0,-3,-7,12};
	int n=10,temp,i,j;
	for(i=1;i<n;i++){
		temp=a[i];
        for (j = i - 1; j >= 0 && a[j] > temp; j--) {
            a[j + 1] = a[j];
        }
	    a[j+1]=temp;
	}

	for(int i:a)cout<<i<<" ";
}
