#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// TreeNode definition
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Solution class
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        dfs(root, maxSum);
        return maxSum;
    }

private:
    int dfs(TreeNode* root, int& maxSum) {
        if (!root) return 0;

        int left = max(0, dfs(root->left, maxSum));
        int right = max(0, dfs(root->right, maxSum));

        maxSum = max(maxSum, left + right + root->val);

        return max(left, right) + root->val;
    }
};

// Main function with a test case
int main() {
    /*
        Constructing the following binary tree:
                 -10
                 /  \
                9   20
                   /  \
                  15   7
        Max path sum = 15 + 20 + 7 = 42
    */

    TreeNode* root = new TreeNode(-10);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    Solution sol;
    cout << "Maximum Path Sum: " << sol.maxPathSum(root) << endl;

    return 0;
    /*
    Output:
    Maximum Path Sum: 42
    */
}
