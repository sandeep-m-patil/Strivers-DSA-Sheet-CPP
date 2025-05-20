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
// Optimal: Reverse the sublist in place
ListNode *reverseBetweenOptimal(ListNode *head, int left, int right)
{
    if (!head || left == right)
        return head;

    ListNode *dummy = new ListNode(-1);
    dummy->next = head;
    ListNode *prev = dummy;

    for (int i = 1; i < left; i++)
        prev = prev->next;

    ListNode *start = prev->next;
    ListNode *then = start->next;

    for (int i = 0; i < right - left; i++)
    {
        start->next = then->next;
        then->next = prev->next;
        prev->next = then;
        then = start->next;
    }

    return dummy->next;
}

// Helpers
ListNode *createList(const vector<int> &arr)
{
    if (arr.empty())
        return nullptr;
    ListNode *head = new ListNode(arr[0]);
    ListNode *curr = head;
    for (int i = 1; i < arr.size(); i++)
    {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

void printList(ListNode *head)
{
    while (head)
    {
        cout << head->val;
        if (head->next)
            cout << " -> ";
        head = head->next;
    }
    cout << "\n";
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int left = 2, right = 4;

    ListNode *head = createList(arr);
    cout << "Original List: ";
    printList(head);

    ListNode *res = reverseBetweenOptimal(head, left, right);
    cout << "After Reverse (Optimal): ";
    printList(res);

    return 0;

    // Output:
    // Original List: 1 -> 2 -> 3 -> 4 -> 5
    // After Reverse : 1 -> 4 -> 3 -> 2 -> 5
}
