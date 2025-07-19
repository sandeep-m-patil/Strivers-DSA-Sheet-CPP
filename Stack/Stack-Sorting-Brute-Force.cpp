#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(n log n)
// Space Complexity : O(n)
void sortStack(stack<int>& s){
    vector<int> v;
    while(!s.empty()){
        v.push_back(s.top());
        s.pop();
    }
    
    sort(v.begin(),v.end());
    
    for(int i=v.size()-1;i>=0;i--){
        s.push(v[i]);
    }
}

void printStackElements(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}


int main(){
    stack<int> s;
    s.push(2);
    s.push(1);
    s.push(4);
    s.push(3);
    s.push(5);
    sortStack(s);
    printStackElements(s);
    return 0;

    /*
    Output:
    1 2 3 4 5
    */
}