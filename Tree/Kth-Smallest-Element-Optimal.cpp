#include <iostream>
#include <vector>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Time: O(H + k)
// Space: O(H) — recursion stack
class Solution {
public:
    int count = 0;
    int result = -1;

    void inorder(TreeNode* root, int k) {
        if (!root || result != -1) return;

        inorder(root->left, k);
        count++;
        if (count == k) {
            result = root->val;
            return;
        }
        inorder(root->right, k);
    }

    int kthSmallest(TreeNode* root, int k) {
        inorder(root, k);
        return result;
    }
};

// Helper function to insert nodes in level order
TreeNode* insertLevelOrder(vector<int> arr, int i) {
    if (i >= arr.size() || arr[i] == -1) return nullptr;

    TreeNode* root = new TreeNode(arr[i]);
    root->left = insertLevelOrder(arr, 2 * i + 1);
    root->right = insertLevelOrder(arr, 2 * i + 2);
    return root;
}

int main() {
    vector<int> treeNodes = {3,1,4};
    int k = 3;

    TreeNode* root = insertLevelOrder(treeNodes, 0);

    Solution sol;
    int ans = sol.kthSmallest(root, k);
    cout << "The " << k << "rd smallest element is: " << ans << endl;

    return 0;
    /*
    Output:
    The 3rd smallest element is: 4
    */
}
