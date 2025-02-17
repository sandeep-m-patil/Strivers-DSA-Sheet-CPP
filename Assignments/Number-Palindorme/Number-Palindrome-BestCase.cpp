#include <bits/stdc++.h>
using namespace std;

//O(Log n) - > Best Solution: Reverse Half the Digits
bool isPalindrome(int n) {
    long long d = n;
    long long  revHalf = 0;
    if (n < 0 || (n % 10 == 0 && n != 0)) return false;
    while (n > revHalf) {
        revHalf = revHalf * 10 + n % 10;
        n /= 10;
    }

    return (n == revHalf || n == revHalf / 10);
}



int main(){
    if(palindrome(789))cout<<"true";
    else cout<<"false";
}