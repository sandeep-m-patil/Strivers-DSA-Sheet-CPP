#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

// Function to print the linked list
void printLL(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to search for a key in the linked list
// Time Complexity: O(n), where n is the number of nodes in the linked list.
// Space Complexity: O(1) (constant extra space).
bool searchInLL(Node *head, int key)
{
    while (head != nullptr)
    {
        if (head->data == key)
            return true;
        head = head->next;
    }
    return false;
}

int main()
{
    vector<int> arr = {12, 8, 5, 7};
    Node *head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);

    printLL(head);
    int key = 5;
    if (searchInLL(head, key))
        cout << key << " found in the linked list." << endl;
    else
        cout << key << " not found in the linked list." << endl;

    return 0;

    /*
    Ouput:
    12 8 5 7
    5 found in the linked list.
    */
}
