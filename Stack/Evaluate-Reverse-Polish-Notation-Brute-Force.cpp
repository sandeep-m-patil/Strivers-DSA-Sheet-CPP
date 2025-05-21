#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Time Complexity O(n²)
// Space Compexity O(1)
class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        while (tokens.size() > 1)
        {
            for (int i = 0; i < tokens.size(); ++i)
            {
                if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
                {
                    int a = stoi(tokens[i - 2]);
                    int b = stoi(tokens[i - 1]);
                    int result;
                    if (tokens[i] == "+")
                        result = a + b;
                    else if (tokens[i] == "-")
                        result = a - b;
                    else if (tokens[i] == "*")
                        result = a * b;
                    else
                        result = a / b;

                    tokens.erase(tokens.begin() + i - 2, tokens.begin() + i + 1);
                    tokens.insert(tokens.begin() + i - 2, to_string(result));
                    break;
                }
            }
        }
        return stoi(tokens[0]);
    }
};

int main()
{
    Solution sol;
    vector<string> tokens = {"2", "1", "+", "3", "*"};
    int result = sol.evalRPN(tokens);
    cout << "Result: " << result << endl; // 9
    return 0;
}
