#include <bits/stdc++.h>

using namespace std;

// Average Time Complexity is O(n*log n) + O(n)
vector<int> removeDuplicates(const vector<int> &arr)
{
    set<int> s(arr.begin(), arr.end());     // Removes duplicates, auto-sorted
    return vector<int>(s.begin(), s.end()); // Convert set back to vector
}

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 4, 4, 5};

    arr = removeDuplicates(arr);

    // Print the unique sorted elements
    for (int num : arr)cout << num << " ";

    /*
    Output:
    1 2 3 4 5 
    */

    return 0;
}
