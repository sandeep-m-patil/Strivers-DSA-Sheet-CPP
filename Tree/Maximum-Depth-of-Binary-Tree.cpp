#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

// Binary tree node definition
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Solution class with maxDepth Method
//  Time Complexity: O(n) where n is no.of nodes
// Space Complexity: O(h) where h is the height of the tree
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return 1 + max(left, right);
    }
};

// Helper function to build tree from level-order vector (-1 = NULL)
TreeNode* buildTree(const vector<int>& nodes) {
    if (nodes.empty() || nodes[0] == -1) return nullptr;

    TreeNode* root = new TreeNode(nodes[0]);
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;

    while (!q.empty() && i < nodes.size()) {
        TreeNode* current = q.front();
        q.pop();

        // Left child
        if (nodes[i] != -1) {
            current->left = new TreeNode(nodes[i]);
            q.push(current->left);
        }
        i++;

        // Right child
        if (i < nodes.size() && nodes[i] != -1) {
            current->right = new TreeNode(nodes[i]);
            q.push(current->right);
        }
        i++;
    }

    return root;
}

int main() {
    // Example: root = [3,9,20,-1,-1,15,7]
    vector<int> treeNodes = {3, 9, 20, -1, -1, 15, 7};

    TreeNode* root = buildTree(treeNodes);

    Solution sol;
    int depth = sol.maxDepth(root);
    cout << "Maximum Depth of Binary Tree: " << depth << endl;

    return 0;

    /*
    Output:
    Maximum Depth of Binary Tree: 3
    */
}
