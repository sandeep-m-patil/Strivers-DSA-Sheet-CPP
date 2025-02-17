#include <bits/stdc++.h> // Includes all standard libraries
using namespace std;

// Best Time Complexity is O(log(n))

bool isPalindrome(int n) {
    // Negative numbers and numbers ending in 0 (except 0 itself) cannot be palindromes
    if (n < 0 || (n % 10 == 0 && n != 0)) return false;

    long long revHalf = 0; // Variable to store the reversed half of the number

    // Process only half of the digits
    while (n > revHalf) {
        revHalf = revHalf * 10 + n % 10; // Add last digit of n to revHalf
        n /= 10; // Remove last digit of n
    }

    // Check if the original number matches the reversed half
    return (n == revHalf || n == revHalf / 10);
}

int main() {
    int num = 789;

    if (isPalindrome(num)) 
        cout << "true";
    else 
        cout << "false";

    /*
    Output: false
    */

    return 0;
}
