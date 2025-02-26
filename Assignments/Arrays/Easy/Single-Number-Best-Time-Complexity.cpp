#include <bits/stdc++.h>
using namespace std;

// Best Time Complexity: O(n)
int getSingleElement(vector<int> &nums)
{
    int result = 0; // Initialize result to 0

    // XOR all elements in the array
    for (int num : nums)
    {
        result ^= num; // Cancel out duplicates, leaving the unique element
    }

    return result; // Return the unique element
}

int main()
{
    // Example input array where every element appears twice except one
    vector<int> arr = {4, 1, 2, 1, 2};

    // Call the function to get the unique element
    int ans = getSingleElement(arr);

    // Output the result
    cout << "The single element is: " << ans << endl;

    return 0;
    /*
    Output:
    The single element is: 4
    */

    /*
    Explaination
    4 ^ 1 ^ 2 ^ 1 ^ 2
    = (4 ^ (1 ^ 1)) ^ (2 ^ 2)
    = (4 ^ 0) ^ 0
    = 4
    */
}
