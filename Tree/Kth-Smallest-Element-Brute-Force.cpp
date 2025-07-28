#include <iostream>
#include <vector>
using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Time: O(n)
// Space: O(n) (for extra array)
class Solution
{
public:
    void inorder(TreeNode *root, vector<int> &vals)
    {
        if (!root)
            return;
        inorder(root->left, vals);
        vals.push_back(root->val);
        inorder(root->right, vals);
    }
    int kthSmallest(TreeNode *root, int k)
    {
        vector<int> vals;
        inorder(root, vals);
        return vals[k - 1];
    }
};

// Helper function to insert nodes in level order
TreeNode *insertLevelOrder(vector<int> arr, int i)
{
    if (i >= arr.size() || arr[i] == -1)
        return nullptr;

    TreeNode *root = new TreeNode(arr[i]);
    root->left = insertLevelOrder(arr, 2 * i + 1);
    root->right = insertLevelOrder(arr, 2 * i + 2);
    return root;
}

int main()
{
    vector<int> treeNodes = {3,1,4};
    int k = 3;

    TreeNode *root = insertLevelOrder(treeNodes, 0);

    Solution sol;
    int ans = sol.kthSmallest(root, k);
    cout << "The " << k << "rd smallest element is: " << ans << endl;

    return 0;

    /*
    Output:
    The 3rd smallest element is: 4
    */
}
