#include <iostream>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Time Complexity: O(N)
// Space Complexity: O(1)
ListNode *removeElementsOptimal(ListNode *head, int val)
{
    ListNode *dummy = new ListNode(-1);
    dummy->next = head;
    ListNode *curr = dummy;

    while (curr->next != nullptr)
    {
        if (curr->next->val == val)
        {
            ListNode *temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
        else
        {
            curr = curr->next;
        }
    }

    return dummy->next;
}

ListNode *createList(const vector<int> &arr)
{
    if (arr.empty())
        return nullptr;
    ListNode *head = new ListNode(arr[0]);
    ListNode *temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }
    return head;
}

void printList(ListNode *head)
{
    while (head != nullptr)
    {
        cout << head->val;
        if (head->next)
            cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {1, 2, 6, 3, 4, 5, 6};
    int val = 6;

    ListNode *head = createList(arr);

    cout << "Original List: ";
    printList(head);

    ListNode *result = removeElementsOptimal(head, val);
    cout << "After Removal (Optimal): ";
    printList(result);

    return 0;

    // Output:
    // Original List: 1 -> 2 -> 6 -> 3 -> 4 -> 5 -> 6
    // After Removal : 1 -> 2 -> 3 -> 4 -> 5
}
