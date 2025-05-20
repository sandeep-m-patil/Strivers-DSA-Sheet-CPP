#include <iostream>
#include <cmath> // For logarithmic functions
#include <algorithm>
using namespace std;

// Best Time Complexity is O(1)
int countDigits(int n){
    // Use log10(n) to find the logarithm base 10 of 'n'
    // The result is the exponent that '10' must be raised to in order to obtain 'n'.
    // Adding 1 to the result accounts for the number of digits.
    // For example, log10(329823) gives 5.518, so adding 1 gives 6.518, which, when cast to an integer, gives 6 digits.
    int cnt = (int)(log10(n) + 1);

    // Return the count of digits in 'n'.
    return cnt;
}

int main() {
    // Define a number 'N' for which we want to count the digits
    int N = 329823;
    
    // Output the value of N
    cout << "N: " << N << endl;

    // Call the countDigits function to get the number of digits in N
    int digits = countDigits(N);

    // Output the result: the number of digits in N
    cout << "Number of Digits in N: " << digits << endl;

    return 0;
    /*
    Output:
    N: 329823
    Number of Digits in N: 6
    */
}
