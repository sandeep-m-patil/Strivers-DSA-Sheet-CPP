#include <bits/stdc++.h>
using namespace std;

/// Time Complexity: O(n²) – due to two nested loops checking pairs of elements.
/// Space Complexity: O(1) – no extra space is used apart from the output vector.
vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    // If the array is empty or has less than 3 elements, return an empty vector.
    if (n < 3)
        return ans;
    // Iterate through the array to find triplets that sum to zero.
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum < 0)
                j++;
            else if (sum > 0)
                k--;
            else
            { // Found a triplet that sums to zero
                ans.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;
                // Skip duplicates for j and k to avoid duplicate triplets
                while (j < k && nums[j] == nums[j - 1])
                    j++;
                while (j < k && nums[k] == nums[k + 1])
                    k--;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> a = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threeSum(a);
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
