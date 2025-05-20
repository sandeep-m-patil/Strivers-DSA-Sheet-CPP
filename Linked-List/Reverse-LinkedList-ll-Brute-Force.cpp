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
// Brute Force: Store values in a vector, then create a new list
ListNode *reverseBetweenBrute(ListNode *head, int left, int right)
{
    vector<int> vals;
    ListNode *temp = head;
    while (temp)
    {
        vals.push_back(temp->val);
        temp = temp->next;
    }
    // Reverse sub-array in vector
    int i = left - 1, j = right - 1;
    while (i < j)
    {
        swap(vals[i], vals[j]);
        i++;
        j--;
    }

    // Rebuild linked list
    ListNode *dummy = new ListNode(-1);
    ListNode *curr = dummy;
    for (int v : vals)
    {
        curr->next = new ListNode(v);
        curr = curr->next;
    }
    return dummy->next;
}

// Helpers to create and print list
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

    ListNode *res = reverseBetweenBrute(head, left, right);
    cout << "After Reverse (Brute): ";
    printList(res);

    return 0;

    // Output:
    // Original List: 1 -> 2 -> 3 -> 4 -> 5
    // After Reverse : 1 -> 4 -> 3 -> 2 -> 5
}
