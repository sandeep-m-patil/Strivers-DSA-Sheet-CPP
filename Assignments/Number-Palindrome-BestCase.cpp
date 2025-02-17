#include <bits/stdc++.h>
using namespace std;

//O(n) Worst Solution: String conversion with reversal
bool palindrome(int n) {
    if(n<0)return 
    int d = (int)log10(n);  // Computes the floor of log10(n), effectively the index of the most significant digit.
    int l = n % 10;        // Gets the last digit of n.
    return d == l;         // Compares the two values.
}


int main(){
    if(palindrome(789))cout<<"true";
    else cout<<"false";
}