#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor with both data and next node
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

    // Constructor with only data (assuming next is initially null)
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
}
// Function to insert a new node at a specific index in the linked list
// Time Complexity: O(n), where n is the number of nodes in the linked list.
// Space Complexity: O(1) (constant extra space).
Node *insertAtIndex(Node *head, int index, int val)
{
    Node *temp = new Node(val);

    // Case 1: Insert at the head (index 0)
    if (index == 0)
    {
        temp->next = head;
        return temp;
    }

    Node *curr = head;
    int count = 0;

    // Traverse to the (index - 1)th node
    while (curr != nullptr && count < index - 1)
    {
        curr = curr->next;
        count++;
    }

    // If index is out of bounds
    if (curr == nullptr)
    {
        cout << "Index out of range" << endl;
        delete temp;
        return head;
    }

    // Insert the node
    temp->next = curr->next;
    curr->next = temp;

    return head;
}

int main()
{
    // Sample array and value for insertion
    vector<int> arr = {12, 8, 5, 7};
    int val = 100;

    // Creating a linked list with initial elements from the array
    Node *head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);

    // Inserting a new node at the head of the linked list
    head = insertAtIndex(head, 2, 99); // Insert 99 at index 2

    // Printing the linked list
    printLL(head);

    return 0;

    /*
    Ouput:
    12 8 99 5 7
    */
}