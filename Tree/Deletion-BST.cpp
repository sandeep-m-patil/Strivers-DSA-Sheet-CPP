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

Node* insert(Node* root,int key){
    // tree is empty then return new node
    if(root==nullptr)return new Node(key);
    
    // otherwise go deep the tree
    if(key<root->val)root->left=insert(root->left,key);
    else if(key>root->val)root->right=insert(root->right,key);
    
    return root;
}
void preorder(Node* root){
    if(root==nullptr)return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
// Function to find the minimum value node in a subtree
Node* minValue(Node* node){
    while(node && node->left!=nullptr)node=node->left;
    return node;
}
// Function to delete a node from the BST
// Time: O(H) where H is the height of the tree
// Space: O(H) for recursion stack
Node* deleteNode(Node* root,int key){
    if(!root)return root;
    // no child or one child
    if(key<root->val)root->left=deleteNode(root->left,key);
    else if(key>root->val)root->right=deleteNode(root->right,key);
    else{
        
        // two child
        if(!root->left){
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if(!root->right){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else{
            Node* temp=minValue(root->right);
            root->val=temp->val;
            root->right=deleteNode(root->right,temp->val);
        }
    }
    return root;
}


int main() {
    Node* root = nullptr;
    int values[] = {5, 7, 2, 3, 1, 8, 9};
    for (int i : values) root = insert(root, i);

    cout << "Preorder before deletion: ";
    preorder(root);
    cout << endl;

    root = deleteNode(root, 7); // Try deleting node

    cout << "Preorder after deletion: ";
    preorder(root);
    cout << endl;

    return 0;

    /*Output:
    Preorder before deletion: 5 2 1 3 7 8 9
    Preorder after deletion: 5 2 1 3 8 9
    */
}
