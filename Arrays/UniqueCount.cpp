#include <iostream>
using namespace std;

int main() {
    int a[10] = {0,0,1,1,1,2,2,3,3,4};
    int n = 10;

    int uniqueCount = 1;

    for (int i = 1; i < n; i++) {
       if (a[i] != a[i - 1]) {
            a[uniqueCount] =a[i];
            uniqueCount++;
        }
    }

    cout << "uniqueCount: " << uniqueCount <<endl;
    return 0;
}

