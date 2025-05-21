#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

// Time Complexity O(n)
// Space Complexity O(n)
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        for (string& token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int b = stk.top(); stk.pop();
                int a = stk.top(); stk.pop();
                if (token == "+") stk.push(a + b);
                else if (token == "-") stk.push(a - b);
                else if (token == "*") stk.push(a * b);
                else if (token == "/") stk.push(a / b); // integer division
            } else {
                stk.push(stoi(token));
            }
        }
        return stk.top();
    }
};

int main() {
    Solution sol;
    vector<string> tokens = {"2", "1", "+", "3", "*"};
    int result = sol.evalRPN(tokens);
    cout << "Result: " << result << endl; // 9
    return 0;
}
