#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Iterative method
// Time Complexity: O(N)
// Space Complexity: O(1)
ListNode* reverseList(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;

    while (curr != nullptr) {
        ListNode* nextNode = curr->next; // store next
        curr->next = prev;               // reverse link
        prev = curr;                     // move prev
        curr = nextNode;                 // move curr
    }

    return prev;
}

// Helper: create list from array
ListNode* createList(int arr[], int n) {
    if (n == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;

    for (int i = 1; i < n; ++i) {
        temp->next = new ListNode(arr[i]);
        temp = temp->next;
    }

    return head;
}

// Helper: print list
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    ListNode* head = createList(arr, n);

    cout << "Original List: ";
    printList(head);

    ListNode* reversed = reverseList(head);

    cout << "Reversed List: ";
    printList(reversed);

    return 0;

    // Output:
    // Original List: 1 -> 2 -> 3 -> 4 -> 5
    // Reversed List: 5 -> 4 -> 3 -> 2 -> 1
}
