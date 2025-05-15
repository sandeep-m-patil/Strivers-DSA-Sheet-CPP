#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

// Function to merge two sorted linked lists
// Time Complexity: O(n + m), where n and m are the lengths of the two lists
// Space Complexity: O(1), as we are using only a constant amount of extra space
ListNode* mergeTwoListsOptimal(ListNode* l1, ListNode* l2) {
    ListNode* dummy = new ListNode(0);
    ListNode* tail = dummy;

    while (l1 && l2) {
        if (l1->val < l2->val) {
            tail->next = l1;
            l1 = l1->next;
        } else {
            tail->next = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    if (l1) tail->next = l1;
    else tail->next = l2;

    return dummy->next;
}

// Utility function to insert at end
ListNode* insert(ListNode* head, int val) {
    if (!head) return new ListNode(val);
    ListNode* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = new ListNode(val);
    return head;
}

// Utility function to print
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    ListNode *list1 = NULL, *list2 = NULL;
    list1 = insert(list1, 1);
    list1 = insert(list1, 2);
    list1 = insert(list1, 4);

    list2 = insert(list2, 1);
    list2 = insert(list2, 3);
    list2 = insert(list2, 4);

    cout << "Merged List (Optimal): ";
    ListNode* merged = mergeTwoListsOptimal(list1, list2);
    printList(merged);
    return 0;
}
