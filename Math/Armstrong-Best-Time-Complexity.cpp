#include <iostream>
#include <cmath>

using namespace std;

// Best Time Complexity is O(n) = O(log n)
bool isArmstrong(int num)
{
    int sum = 0, original = num;
    int digits = (num == 0) ? 1 : log10(num) + 1; // Count digits efficiently

    while (num > 0)
    {
        int digit = num % 10;
        sum += pow(digit, digits); // Compute power directly
        num /= 10;
    }

    return sum == original;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num))
        cout << num << " is an Armstrong number.\n";
    else
        cout << num << " is not an Armstrong number.\n";
    return 0;
    /*
    Output:
    Enter a number: 371
    371 is an Armstrong number.
    */

   
}
