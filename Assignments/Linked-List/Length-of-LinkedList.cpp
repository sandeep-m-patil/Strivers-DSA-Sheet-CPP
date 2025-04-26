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

// Function to find length of linked list
// Time Complexity: O(n), where n is the number of nodes in the linked list.
// Space Complexity: O(1) (constant extra space).
int lengthLL(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int main()
{
    vector<int> arr = {12, 8, 5, 7};
    Node *head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);

    cout << "Length of Linked List: " << lengthLL(head) << endl;

    cout << "Linked List: ";
    printLL(head);

    return 0;
    /*
    Ouput:
    Length of Linked List: 4
    Linked List: 12 8 5 7
    */
}
