#include <bits/stdc++.h>
using namespace std;

// Time Complexity: O(n³) – due to three nested loops checking all triplets.
// Space Complexity: O(n³) – in the worst case, all triplets are unique and stored in a set
vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();
    set<vector<int>> st;
    // If the array is empty or has less than 3 elements, return an empty vector.
    if (n < 3)
        return vector<vector<int>>();
    // Sort the array to make it easier to find triplets.
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    vector<int> temp = {nums[i], nums[j], nums[k]};

                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    // Convert the set to a vector of vectors.
    return vector<vector<int>>(st.begin(), st.end());
}

int main()
{
    vector<int> a = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threeSum(a);
    // Print the result
    for (const auto &row : ans)
    {
        for (const auto &element : row)
        {
            cout << element << " ";
        }
        cout << endl;
    }

    /*
    Output:
    -1 -1 2
    -1 0 1
    */
}