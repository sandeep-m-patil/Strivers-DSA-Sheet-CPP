#include <bits/stdc++.h>
using namespace std;

//Average Time Complexity is O(n)

vector<int> getDivisors(int n) {
    // Vector to store divisors
    vector<int> divisors;

    // Loop through numbers from 1 to n to find divisors
    for (int i = 1; i <= n; i++) {
        // If n is divisible by i
        if (n % i == 0) {
            // Add the divisor to the vector
            divisors.push_back(i);
        }
    }
    
    // Return the vector of divisors
    return divisors;
}

int main() {
    // Test number
    int number = 12;

    // Call the function to get divisors
    vector<int> divisors = getDivisors(number);

    int sum=0;
    
    // Print the divisors
    cout << "sum of Divisors of  " << number << " are: ";
    for (int i : divisors) {
        sum+=i;
    }
    cout << sum;
    return 0;
    
    /*
    Output:
    sum of Divisors of  12 are: 28
    */

    
}
