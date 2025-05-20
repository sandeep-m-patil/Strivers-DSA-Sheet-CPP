
#include <bits/stdc++.h>
using namespace std;

// Best time complexity: O(N)
int missingNumber(vector<int> &a, int N)
{
    int xor1 = 0, xor2 = 0;

    // XOR all numbers from 1 to N
    for (int i = 1; i <= N; i++)
    {
        xor1 ^= i;
    }

    // XOR all elements in the given array
    for (int num : a)
    {
        xor2 ^= num;
    }

    // XOR of both will give the missing number
    return xor1 ^ xor2;

    // who is works ?
    /*
    1 ^ 2 ^ 3 ^ 4 ^ 5 = 1 = XOR1
    1 ^ 2 ^ 4 ^ 5 = 2 = XOR2
    XOR1 ^ XOR2 = 1^2 = Missing Number (3)

    */
}

int main()
{
    int N = 5;
    vector<int> a = {5, 4, 2, 1}; // Missing number is 3
    cout << "The missing number is: " << missingNumber(a, N) << endl;
    return 0;
}

int main()
{
    int N = 5;
    vector<int> a = {5, 4, 2, 1}; // Given array with one missing number
    cout << "The missing number is: " << missingNumber(a, N) << endl;
    return 0;

    /*
    Output:
    The missing number is: 3
    */
}
