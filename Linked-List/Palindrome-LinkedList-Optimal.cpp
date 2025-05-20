#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverse(ListNode* head) {
    ListNode* prev = NULL;
    while (head != NULL) {
        ListNode* next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}
// Approach: Use two pointers to find the middle of the list, reverse the second half, and compare both halves
// Time Complexity: O(n)
// Space Complexity: O(1)
bool isPalindromeOptimal(ListNode* head) {
    if (!head || !head->next) return true;

    // Step 1: Find middle
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Step 2: Reverse second half
    ListNode* secondHalf = reverse(slow);

    // Step 3: Compare halves
    ListNode* firstHalf = head;
    ListNode* temp = secondHalf;
    while (temp != NULL) {
        if (firstHalf->val != temp->val)
            return false;
        firstHalf = firstHalf->next;
        temp = temp->next;
    }

    return true;
}

// Utility function to insert node at end
ListNode* insert(ListNode* head, int val) {
    if (!head) return new ListNode(val);
    ListNode* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = new ListNode(val);
    return head;
}

int main() {
    ListNode* head = NULL;
    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 2);
    head = insert(head, 1);

    cout << "Optimal Result: ";
    cout << (isPalindromeOptimal(head) ? "true" : "false") << endl;

    return 0;
}
