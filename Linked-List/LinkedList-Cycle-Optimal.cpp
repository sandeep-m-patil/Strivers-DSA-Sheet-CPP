#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
// Time Complexity: O(N)
// Space Complexity: O(1)
bool hasCycleOptimal(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) return true;
    }
    return false;
}

// Helper functions
ListNode* createListWithCycle() {
    // Example: [3,2,0,-4] with cycle at position 1
    ListNode* n1 = new ListNode(3);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(0);
    ListNode* n4 = new ListNode(-4);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n2; // cycle here

    return n1;
}

int main() {
    ListNode* head = createListWithCycle();

    if (hasCycleOptimal(head))
        cout << "Cycle detected (Optimal)" << endl;
    else
        cout << "No cycle (Optimal)" << endl;

    return 0;
}
