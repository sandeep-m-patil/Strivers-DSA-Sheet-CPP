#include <iostream>
using namespace std;

int main() {
    int a[10] = {121, 7, 14, -3, 8, 19, 100, 2, 31, -2};
    int n = 10;
    int l = 0, h = n - 1;
    int firstMax = a[0], secondMax = INT_MIN; // Initialize secondMax properly

    for(int i=1;i<n;i++){
        if(a[i]>firstMax){
            secondMax=firstMax;
            firstMax=a[i];
        }
        else if(a[i]>secondMax && a[i]<firstMax)secondMax=a[i];

    }

    cout << "First Max: " << firstMax << ", Second Max: " << secondMax << endl;
    return 0;
}
