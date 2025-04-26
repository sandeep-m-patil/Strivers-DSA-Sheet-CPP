#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *constructLL(vector<int> &arr)
{
    int n = arr.size();
    if (n == 0)
        return nullptr;
    Node *head = new Node(arr[0]);
    Node *curr = head;

    for (int i = 1; i < n; i++)
    {
        curr->next = new Node(arr[i]);
        curr = curr->next;
    }

    return head;
}
// Time Complexity is O(N)
Node *deleteAtPosition(Node *head, int pos)
{
    if (head == NULL)
        return NULL;

    if (pos == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node *curr = head;
    for (int i = 0; curr != NULL && i < pos - 1; i++)
    {
        curr = curr->next;
    }

    if (curr == NULL || curr->next == NULL)
        return head;

    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;

    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        if (temp->next != NULL)
            cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    vector<int> a = {1, 2, 3, 4, 5};
    Node *head = constructLL(a);
    cout << "Original List: ";
    print(head);

    head = deleteAtPosition(head, 2); // delete the element at index 2 (i.e., value 3)
    cout << "After Deletion at Position 2: ";
    print(head);

    /*
    Output:
    Original List: 1 -> 2 -> 3 -> 4 -> 5
    After Deletion at Position 2: 1 -> 2 -> 4 -> 5
*/
}