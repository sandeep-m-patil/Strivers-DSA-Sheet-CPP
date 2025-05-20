#include <bits/stdc++.h>
using namespace std;

// Optimal solution: O(N) time complexity and O(N) space complexity
vector<int> sortedSquares(vector<int> &nums)
{
    vector<int> res(nums.size());
    int l = 0, r = nums.size() - 1, p = nums.size() - 1;
    while (l <= r)
    {
        int lsqr = nums[l] * nums[l];
        int rsqr = nums[r] * nums[r];

        if (lsqr > rsqr)
        {
            res[p--] = lsqr;
            l++;
        }
        else
        {
            res[p--] = rsqr;
            r--;
        }
    }
    return res;
}

int main()
{
    vector<int> a = {-4, -1, 0, 3, 10};
    vector<int> res = sortedSquares(a);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    /*
    Output:
    0 1 9 16 100
    */
}