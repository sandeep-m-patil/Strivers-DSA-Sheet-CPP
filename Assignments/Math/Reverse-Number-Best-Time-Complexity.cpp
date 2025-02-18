#include <iostream>
using namespace std;

//Best Time Complexity is O(log n + 1)
int main() {
    int n;
    cin >> n;

    // Initialize a variable 'revNum' to store the reverse of the input integer.
    int revNum = 0;

    // Start a while loop to reverse the digits of the input integer.
    while(n > 0){
        // Extract the last digit of 'n' using modulus operation and store it in 'ld'.
        int ld = n % 10;

        // Multiply the current reversed number 'revNum' by 10 and add the last digit 'ld'.
        // This shifts the digits of 'revNum' to the left and adds the new last digit.
        revNum = (revNum * 10) + ld;

        // Remove the last digit from 'n' by performing integer division by 10.
        // This effectively reduces the number 'n' by one digit.
        n = n / 10;
    }

    // Print the reversed number stored in 'revNum'.
    cout << revNum;

    return 0;
}
