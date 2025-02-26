#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Best Time Complexity is O(sqrt(n))

bool checkPrime(int n) {
    // Handle special cases for 0 and 1.
    if (n <= 1) {
        return false; // 0 and 1 are not prime numbers.
    }

    // Loop through numbers from 2 to the square root of n.
    for (int i = 2; i <= sqrt(n); i++) {
        // If n is divisible by i without any remainder.
        if (n % i == 0) {
            return false; // n is divisible by i, so it's not prime.
        }
    }

    // If no divisors were found, n is prime.
    return true;
}

int main() {
    // Test number
    int n = 1483;

    // Check if the number is prime.
    bool isPrime = checkPrime(n);

    // Output the result based on whether the number is prime or not.
    if (isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;

    /*
    Output:
    1483 is a prime number.
    */
}
