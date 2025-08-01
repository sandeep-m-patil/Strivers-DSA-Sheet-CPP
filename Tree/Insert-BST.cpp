#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* left;
    Node* right;
    
    Node(int value){
        val=value;
        left=right=nullptr;
    }
};

// Function to insert a new key in the BST
// Time: O(H) where H is the height of the tree
// Space: O(H) for recursion stack
Node* insert(Node* root,int key){
    // tree is empty then return new node
    if(root==nullptr)return new Node(key);
    
    // otherwise go deep the tree
    if(key<root->val)root->left=insert(root->left,key);
    else if(key>root->val)root->right=insert(root->right,key);
    
    return root;
}

void inorder(Node* root){
    if(root==nullptr)return;
    // Inorder traversal: left, root, right
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

int main(){
    Node* root = nullptr;
    int values[] = {10,20,30,40 ,50};
    // Insert values into the BST
    for(int i:values)root=insert(root,i);
    // Print the inorder traversal of the BST
    inorder(root);
    /*
    Output: 
    10 20 30 40 50
    */
}



