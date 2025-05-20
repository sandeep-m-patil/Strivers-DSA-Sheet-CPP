#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int v) : val(v), next(NULL) {}
};
// This function sorts a linked list using a brute force approach
// Time Complexity: O(n log n) for sorting the array, O(n) for traversing the list
// Space Complexity: O(n) for storing the values in an array
ListNode *sortListBrute(ListNode *head)
{
    vector<int> vals;
    ListNode *temp = head;

    while (temp)
    {
        vals.push_back(temp->val);
        temp = temp->next;
    }

    sort(vals.begin(), vals.end());

    temp = head;
    int i = 0;
    while (temp)
    {
        temp->val = vals[i++];
        temp = temp->next;
    }

    return head;
}

ListNode *insert(ListNode *head, int val)
{
    if (!head)
        return new ListNode(val);
    ListNode *temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = new ListNode(val);
    return head;
}

void printList(ListNode *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    ListNode *head = NULL;
    head = insert(head, 4);
    head = insert(head, 2);
    head = insert(head, 1);
    head = insert(head, 3);

    cout << "Original List: ";
    printList(head);

    head = sortListBrute(head);

    cout << "Sorted List : ";
    printList(head);

    return 0;

    // Output:
    // Original List: 4 2 1 3
    // Sorted List : 1 2 3 4
}
