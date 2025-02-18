#include <iostream>
#include <algorithm>
using namespace std;

// Best Time Complexity is O(log n)
int countDigits(int n)
{

    // 'cnt' to store the count of digits.
    int cnt = 0;

    while (n > 0)
    {
        // Increment the counter for each digit encountered.
        cnt = cnt + 1;

        // Divide 'n' by 10 to remove the last digit.
        n = n / 10;
    }

    // Return the total count of digits.
    return cnt;
}

int main()
{
    // Define a number 'N' to find the number of digits.
    int N = 329823;

    // Print the number N
    cout << "N: " << N << endl;

    // Call the countDigits function to get the number of digits in N
    int digits = countDigits(N);

    // Output the result
    cout << "Number of Digits in N: " << digits << endl;

    /*
    Output:
    N: 329823
    Number of Digits in N: 6
    */
    return 0;
}
