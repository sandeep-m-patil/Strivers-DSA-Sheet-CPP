#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Helper to get the length of the list
int getLength(ListNode *head)
{
    int len = 0;
    while (head)
    {
        len++;
        head = head->next;
    }
    return len;
}

// Merge two sorted lists, returns new head and tail
// Time Complexity: O(n log n)
// Space Complexity: O(1) for the iterative approach
pair<ListNode *, ListNode *> merge(ListNode *l1, ListNode *l2)
{
    ListNode dummy(0);
    ListNode *tail = &dummy;

    while (l1 && l2)
    {
        if (l1->val < l2->val)
        {
            tail->next = l1;
            l1 = l1->next;
        }
        else
        {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    tail->next = l1 ? l1 : l2;
    while (tail->next)
        tail = tail->next; // find real tail

    return {dummy.next, tail};
}
// Iterative Bottom-Up Merge Sort
ListNode *sortListBottomUp(ListNode *head)
{
    if (!head || !head->next)
        return head;

    int length = getLength(head);
    ListNode dummy(0);
    dummy.next = head;

    for (int step = 1; step < length; step *= 2)
    {
        ListNode *prev = &dummy;
        ListNode *curr = dummy.next;

        while (curr)
        {
            ListNode *left = curr;
            ListNode *right = nullptr;
            ListNode *next = nullptr;

            // split left
            int i = 1;
            while (i < step && curr && curr->next)
            {
                curr = curr->next;
                i++;
            }

            // split right
            right = curr->next;
            curr->next = nullptr;
            curr = right;
            i = 1;
            while (i < step && curr && curr->next)
            {
                curr = curr->next;
                i++;
            }

            if (curr)
            {
                next = curr->next;
                curr->next = nullptr;
            }

            // merge
            auto [mergedHead, mergedTail] = merge(left, right);
            prev->next = mergedHead;
            prev = mergedTail;
            curr = next;
        }
    }

    return dummy.next;
}

// Helpers
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

// Main
int main()
{
    ListNode *head = nullptr;
    head = insert(head, 4);
    head = insert(head, 2);
    head = insert(head, 1);
    head = insert(head, 3);

    cout << "Original list: ";
    printList(head);

    head = sortListBottomUp(head);

    cout << "Sorted list (Bottom-Up): ";
    printList(head);

    return 0;

    // Output:
    // Original list: 4 2 1 3
    // Sorted list (Bottom-Up): 1 2 3 4
}
