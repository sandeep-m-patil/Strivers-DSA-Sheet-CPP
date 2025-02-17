
#include <iostream>
using namespace std;

int main() {
    int a[5] = {1, 2, 3, 4, 5},b[5]={1, 2, 3, 6, 7};
    int na =5 , nb = 5;
    int i=0,j=0,c=0;
    int p[na+nb];
    while(i<na && j<nb){
        if(i>0 && a[i]==a[i-1]){
            i++;
            continue;
        }
        if(j>0 && b[j]==b[j-1]){
            j++;
            continue;
        }
        if (a[i] < b[j]) {
            p[c++]=a[i++];
        } else if (b[j] < a[i]) {
            p[c++]=b[j++];
        } else {
            p[c++]=a[i];
            i++;
            j++;
        }
    }

    while(i<na){if(i == 0 || a[i] != a[i - 1])p[c++]=a[i++];}
    while(j<nb){if(j == 0 || a[j] != a[j- 1])pc++]=b[j++];}


    for(auto i:p)cout<<i<" ";
    return 0;

}

