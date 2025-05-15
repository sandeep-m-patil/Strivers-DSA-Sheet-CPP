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
// Space Complexity: O(N)
ListNode *removeElementsBrute(ListNode *head, int val)
{
    vector<int> values;
    // Collect all values except the one to remove
    while (head != nullptr)
    {
        if (head->val != val)
            values.push_back(head->val);
        head = head->next;
    }

    if (values.empty())
        return nullptr;
    // Create new list from collected values
    ListNode *newHead = new ListNode(values[0]);
    ListNode *temp = newHead;
    for (int i = 1; i < values.size(); i++)
    {
        temp->next = new ListNode(values[i]);
        temp = temp->next;
    }

    return newHead;
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

    ListNode *result = removeElementsBrute(head, val);
    cout << "After Removal : ";
    printList(result);

    return 0;

    // Output:
    // Original List: 1 -> 2 -> 6 -> 3 -> 4 -> 5 -> 6
    // After Removal : 1 -> 2 -> 3 -> 4 -> 5
}
