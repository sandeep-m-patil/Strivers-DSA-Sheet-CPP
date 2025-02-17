#include<iostream>
using namespace std;

//Average Time Complexity is O(n)

bool palindrome(int n) {

    // Convert the number to a string (O(n))
    string str = to_string(n); 

    // Reverse the string (O(n))
    string revStr = string(str.rbegin(), str.rend()); 

    // Compare original string with reversed string (O(n))
    return str == revStr; 
}

int main(){
    if(palindrome(789))cout<<"true";
    else cout<<"false";

    /*
    Output:false 
    */
}