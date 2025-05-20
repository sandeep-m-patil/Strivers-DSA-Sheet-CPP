#include<bits/stdc++.h>
using namespace std;

// Brute force solution: O(N logN) time complexity and O(N) space complexity
vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;
        for(int i:nums)res.push_back(i*i);
        sort(res.begin(),res.end());
        return res;
}
    
int main(){
    vector<int> a = {-4,-1,0,3,10};
    vector<int> res = sortedSquares(a);
    for(int i=0;i<res.size();i++)cout<<res[i]<<" ";
    
    /* 
    Output:
    0 1 9 16 100
    */
}