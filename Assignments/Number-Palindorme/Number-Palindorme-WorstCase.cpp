#include<iostream>
using namespace std;

//O(n) Worst Solution: String conversion with reversal
bool palindrome(int n) {
    string str = to_string(n);           // Convert the number to a string (O(n))
    string revStr = string(str.rbegin(), str.rend());  // Reverse the string (O(n))
    return str == revStr;                // Compare original string with reversed string (O(n))
}

int main(){
    cout<<palindrome(786)<<endl;
}