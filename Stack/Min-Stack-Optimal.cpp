#include <iostream>
#include <stack>
using namespace std;

// Time Complexity  O(1)	
// Space Complexity O(n)
class MinStack {
private:
    stack<int> st;     // Main stack
    stack<int> minSt;  // Stack to keep track of minimums

public:
    MinStack() {}

    void push(int val) {
        st.push(val);
        if (minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        } else {
            minSt.push(minSt.top());
        }
    }

    void pop() {
        if (!st.empty()) {
            st.pop();
            minSt.pop();
        }
    }

    int top() {
        if (!st.empty())
            return st.top();
        return -1; // or throw an exception
    }

    int getMin() {
        if (!minSt.empty())
            return minSt.top();
        return -1; // or throw an exception
    }
};

int main() {
    MinStack minStack;

    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);

    cout << "Min: " << minStack.getMin() << endl; // Output: -3

    minStack.pop();

    cout << "Top: " << minStack.top() << endl;    // Output: 0
    cout << "Min: " << minStack.getMin() << endl; // Output: -2

    return 0;
}
