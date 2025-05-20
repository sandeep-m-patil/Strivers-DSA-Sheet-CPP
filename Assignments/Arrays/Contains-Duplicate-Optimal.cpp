#include <bits/stdc++.h>
using namespace std;

// Optimal solution: O(N) time complexity and O(N) space complexity
bool containsDuplicate(vector<int> &nums)
{
    unordered_set<int> seen;

    for (int num : nums)
    {
        if (seen.count(num))
            return true;  // duplicate found
        seen.insert(num); // store number
    }

    return false; // no duplicates
}

int main()
{
    vector<int> a = {1, 2, 3, 1};
    if (containsDuplicate(a))
        cout << "true";
    else
        cout << "false";
    /*
    Output:
    true
    */
}