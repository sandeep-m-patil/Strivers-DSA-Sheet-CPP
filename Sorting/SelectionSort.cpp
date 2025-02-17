#include<iostream>
using namespace std;

int main(){
	int a[10]={-5,3,6,8,-1,9,0,-3,-7,12};
	int n=10,min_index,i,j;
	for(i=0;i<n-1;i++){
		min_index=i;
        for (j = i+1; j <n; j++) {
           if(a[j]<a[min_index])min_index=j;
        }
	    swap(a[i], a[min_index]);
	}

	for(int i:a)cout<<i<<" ";
}
