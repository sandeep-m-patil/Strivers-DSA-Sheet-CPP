#include<bits/stdc++.h>
using namespace std;

// Brute force solution: O(N^2) time complexity and O(1) space complexity
int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                int profit = prices[j]-prices[i];
                maxProfit = max(maxProfit,profit);
            }
        } 
        return maxProfit;
}

int main(){
    vector<int> a= {7,1,5,3,6,4};
    cout<<maxProfit(a);
    /*
    Output:
    5
    */
}