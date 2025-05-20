#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Time Complexity: O(n)
// Space Complexity: O(1)
// Optimal: Fast and slow pointer
ListNode *middleNodeOptimal(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

// Helper: Create list from array
ListNode *createList(int arr[], int n)
{
    if (n == 0)
        return nullptr;
    ListNode *head = new ListNode(arr[0]);
    ListNode *temp = head;

    for (int i = 1; i < n; ++i)
    {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }

    return head;
}

// Helper: Print list from given node
void printList(ListNode *head)
{
    while (head != nullptr)
    {
        cout << head->val;
        if (head->next != nullptr)
            cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    ListNode *head = createList(arr, n);

    cout << "Original List: ";
    printList(head);

    ListNode *middle = middleNodeOptimal(head);
    cout << "Middle Node : " << middle->val << endl;

    return 0;

    // Output:
    // Original List: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7
    // Middle Node : 4
}
