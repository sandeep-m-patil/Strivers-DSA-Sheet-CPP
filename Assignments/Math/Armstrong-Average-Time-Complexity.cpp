#include <iostream>

using namespace std;

// Function to count digits manually (inefficient)
int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    return count;
}

// Function to compute power manually (inefficient)
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

// Average Time Complexity is O(n²)

bool isArmstrong(int num) {
    int sum = 0, original = num;
    int digits = countDigits(num);  // Manual digit count

    while (num > 0) {
        int digit = num % 10;
        sum += power(digit, digits);  // Manual exponentiation
        num /= 10;
    }

    return sum == original;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num))
        cout << num << " is an Armstrong number.\n";
    else
        cout << num << " is not an Armstrong number.\n";


    /*
    Output:
    Enter a number: 371
    371 is an Armstrong number.
    */

    return 0;
}
