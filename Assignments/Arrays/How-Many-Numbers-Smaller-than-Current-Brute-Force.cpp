#include <bits/stdc++.h>
using namespace std;

// Worst time complexity: O(N^2)
vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{
    vector<int> a(nums.size());

    for (int i = 0; i < nums.size(); i++)
    {
        int c = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] < nums[i])
                c++;
        }
        a[i] = c;
    }
    return a;
}

int main()
{
    vector<int> a = {8, 1, 2, 2, 3};
    vector<int> count = smallerNumbersThanCurrent(a);
    for (int i = 0; i < count.size(); i++)
        cout << count[i] << " ";

    /*
    Output:
    4 0 1 1 3 
     */
}