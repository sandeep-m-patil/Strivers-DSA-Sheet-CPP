#include<bits/stdc++.h>
using namespace std;

// Worst time complexity: O(N^2)
bool containsDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j])return true;
            }
        }
        return false;
}
    
    
int main(){
    vector<int> a = {1,2,3,1};
    if(containsDuplicate(a))cout<<"true";
    else cout<<"false";

    /*
    Output:
    true
    */

}