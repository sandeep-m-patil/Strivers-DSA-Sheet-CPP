#include <bits/stdc++.h>
using namespace std;

//Average Time Complexity is O(n)

bool checkPrime(int n) {
    // Initialize a counter variable to count the number of factors.
    int cnt = 0;
    
    // Loop through numbers from 1 to n.
    for (int i = 1; i <= n; i++) {
        // If n is divisible by i without any remainder.
        if (n % i == 0) {
            // Increment the counter.
            cnt++;
        }
    }
    
    // A prime number has exactly 2 factors: 1 and itself.
    return (cnt == 2);
}

int main() {
    // Define the number to check.
    int n = 1483;
    
    // Call the function to check if the number is prime.
    bool isPrime = checkPrime(n);
    
    // Output the result.
    if (isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
    
    /*
    Output:
    1483 is a prime number.
    */
    return 0;
}