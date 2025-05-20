#include <iostream>
#include <stack>
#include <string>
using namespace std;
// Time Complexity O(n²)
// Space Complexity O (n)
class Solution {
public:
    bool isValid(string s) {
        bool changed = true;

        while (changed) {
            changed = false;
            stack<char> st;

            for (int i = 0; i < (int)s.size(); i++) {
                if (!st.empty()) {
                    char top = st.top();
                    if ((top == '(' && s[i] == ')') ||
                        (top == '[' && s[i] == ']') ||
                        (top == '{' && s[i] == '}')) {
                        st.pop();  // remove matched pair
                        changed = true;
                    }
                    else {
                        st.push(s[i]);
                    }
                } else {
                    st.push(s[i]);
                }
            }

            // Rebuild string from stack (in correct order)
            string newStr = "";
            while (!st.empty()) {
                newStr = st.top() + newStr;
                st.pop();
            }
            s = newStr;
        }
        return s.empty();
    }
};

int main() {
    Solution sol;
    cout << boolalpha;
    cout << sol.isValid("()[]{}") << endl; // true
    cout << sol.isValid("(]") << endl;     // false
    cout << sol.isValid("([{}])") << endl; // true
    cout << sol.isValid("([)]") << endl;   // false

    return 0;
}
