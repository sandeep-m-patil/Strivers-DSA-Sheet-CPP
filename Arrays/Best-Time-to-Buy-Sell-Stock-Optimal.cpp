#include<bits/stdc++.h>
using namespace std;
// Optimal solution: O(N) time complexity and O(1) space complexity
int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            minPrice = min(minPrice, price);
            maxProfit = max(maxProfit, price - minPrice);
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