#include<bits/stdc++.h>
using namespace std;

// Time Complexity : O(n²)
// Space Complexity : O(n)
void sortStack(stack<int>& s){
    stack<int> temp;
    while(!s.empty()){
        int cur = s.top();
        s.pop();
        while(!temp.empty() && temp.top()>cur){
            s.push(temp.top());
            temp.pop();
        }
        temp.push(cur);
    }
    
    while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
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