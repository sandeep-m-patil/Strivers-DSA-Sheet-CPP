#include<bits/stdc++.h>
using namespace std;

// Optimal solution: O(N) time complexity and O(1) space complexity
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
       int count[101] = {0};

        // Step 1: Count frequency of each number
        for (int num : nums) {
            count[num]++;
        }

        // Step 2: Convert to prefix sum so count[i] means how many numbers <= i
        for (int i = 1; i <= 100; ++i) {
            count[i] += count[i - 1];
        }

        // Step 3: Build result
        vector<int> result;
        for (int num : nums) {
            if (num == 0)
                result.push_back(0);
            else
                result.push_back(count[num - 1]); // count of numbers < num
        }

        return result;
    }
    
int main(){
    vector<int> a ={8,1,2,2,3};
    vector<int> count = smallerNumbersThanCurrent(a);
    for(int i=0;i<count.size();i++)cout<<count[i]<<" ";

    /*
    Output:
    4 0 1 1 3 
     */
}