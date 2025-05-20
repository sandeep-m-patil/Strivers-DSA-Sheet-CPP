#include <iostream>
#include <stack>
using namespace std;

// Time Complexity  O(n)	
// Space Complexity O(n)
class MinStack {
private:
    stack<int> st;

public:
    MinStack() {}

    void push(int val) {
        st.push(val);
    }

    void pop() {
        if (!st.empty())
            st.pop();
    }

    int top() {
        if (!st.empty())
            return st.top();
        return -1; // or throw error
    }
 
    int getMin() {
        int minVal = st.top();
        stack<int> temp = st;

        while (!temp.empty()) {
            minVal = min(minVal, temp.top());
            temp.pop();
        }

        return minVal;
    }
};

int main() {
    MinStack minStack;
    
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);

    cout << "Min: " << minStack.getMin() << endl; // → -3

    minStack.pop();

    cout << "Top: " << minStack.top() << endl;    // → 0
    cout << "Min: " << minStack.getMin() << endl; // → -2

    return 0;
}
