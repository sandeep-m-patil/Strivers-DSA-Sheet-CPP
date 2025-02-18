#include <iostream>
#include <string> // For string manipulation
using namespace std;

// Average Time Complexity is O(n)
int reverseNumber(int n) {
    // Convert the number to a string for inefficient manipulation
    string str = to_string(n);

    // Initialize an empty string to store the reversed number
    string reversed_str = "";

    // Iterate through the string and build the reversed version
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed_str += str[i]; // Append the characters in reverse order
    }

    // Convert the reversed string back to an integer
    // This step introduces additional time complexity for string-to-int conversion
    return stoi(reversed_str);
}

int main() {
    int N = 329823;
    cout << "Original Number: " << N << endl;

    // Call the function to reverse the number with worst time complexity
    int reversed = reverseNumber(N);

    cout << "Reversed Number: " << reversed << endl;

    /*
    Output:
    Original Number: 329823
    Reversed Number: 328923
    */
    return 0;
}
