#include <bits/stdc++.h> 
using namespace std;

// Average Time Complexity is O(n)
vector<int> moveZeros(int n, vector<int> a) {
    // Temporary array to store non-zero elements
    vector<int> temp;

    // Traverse the original array and store non-zero elements in temp
    for (int i = 0; i < n; i++) {
        if (a[i] != 0)
            temp.push_back(a[i]); // Store only non-zero elements
    }

    // Number of non-zero elements in the array
    int nz = temp.size();

    // Copy the non-zero elements from temp back to the original array
    for (int i = 0; i < nz; i++) {
        a[i] = temp[i];
    }

    // Fill the remaining positions with zeros
    for (int i = nz; i < n; i++) {
        a[i] = 0;
    }

    // Return the modified array
    return a;
}

int main()
{
    // Initialize the input array
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = arr.size(); // Size of the array

    // Call the function to move zeros to the end
    vector<int> ans = moveZeros(n, arr);

    // Print the modified array
    cout << "Array after moving zeros to the end: ";
    for (auto i : ans) {
        cout << i << " ";
    }
    return 0;
    
    /*
    Output: 
    1 2 3 2 4 5 1 0 0 0 
    */


}
