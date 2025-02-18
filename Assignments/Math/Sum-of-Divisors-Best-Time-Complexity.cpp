#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Best Time Complexity is O(sqrt(n))

vector<int> getDivisors(int n) {
    // Initialize an empty vector to store the divisors
    vector<int> divisors; 

    // Calculate the square root of n to limit the iteration
    int sqrtN = sqrt(n); 
    
    // Loop from 1 to the square root of n
    for (int i = 1; i <= sqrtN; ++i) { 
        // Check if i divides n without leaving a remainder
        if (n % i == 0) { 
            // If i is a divisor, add it to the divisors list
            divisors.push_back(i); 

            // Check and add the counterpart divisor if it's different from i
            if (i != n / i) {
                // Add the counterpart divisor to the list
                divisors.push_back(n / i); 
            }
        }
    }
    
    // Return the list of divisors
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

    /*
    Output:
    sum of Divisors of  12 are: 28
    */

    return 0;
}
