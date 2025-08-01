#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *left;
    Node *right;

    Node(int value)
    {
        val = value;
        left = right = nullptr;
    }
};

Node *insert(Node *root, int key)
{
    // tree is empty then return new node
    if (root == nullptr)
        return new Node(key);

    // otherwise go deep the tree
    if (key < root->val)
        root->left = insert(root->left, key);
    else if (key > root->val)
        root->right = insert(root->right, key);

    return root;
}

// Function to perform preorder, inorder, and postorder traversals
// of a binary tree

void preorder(Node *root)
{
    if (root == nullptr)
        return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node *root)
{
    if (root == nullptr)
        return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

void postorder(Node *root)
{
    if (root == nullptr)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}

int main()
{
    Node *root = nullptr;
    int values[] = {5, 7, 2, 3, 1, 8, 9};
    for (int i : values)root = insert(root, i);
    
    cout << "Preorder: ";
    preorder(root);
    cout << endl;

    
    cout << "Inorder: ";
    inorder(root);

    cout << endl;
    cout << "Postorder: ";
    postorder(root);


    /*
    Output:
    Preorder: 5 2 1 3 7 8 9
    Inorder: 1 2 3 5 7 8 9
    Postorder: 1 3 2 9 8 7 5
}
