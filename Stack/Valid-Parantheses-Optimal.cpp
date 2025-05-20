#include <iostream>
#include <stack>
#include <string>
using namespace std;
 
// Time Complexity O(n)
// Space Complexity O (n)
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(') st.push(')');
            else if (c == '[') st.push(']');
            else if (c == '{') st.push('}');
            else {
                if (st.empty() || st.top() != c)
                    return false;
                st.pop();
            }
        }
        return st.empty();
    }
};

int main() {
    Solution sol;
    cout << boolalpha;
    cout << sol.isValid("()[]{}") << endl;  // true
    cout << sol.isValid("(]") << endl;      // false
    cout << sol.isValid("([{}])") << endl;  // true
    cout << sol.isValid("([)]") << endl;    // false
    return 0;
}
