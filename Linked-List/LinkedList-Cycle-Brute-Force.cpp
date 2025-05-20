#include <iostream>
#include <unordered_set>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Time Complexity: O(N^2)
// Space Complexity: O(N)
bool hasCycleBrute(ListNode* head) {
    unordered_set<ListNode*> visited;

    while (head != nullptr) {
        if (visited.find(head) != visited.end())
            return true;
        visited.insert(head);
        head = head->next;
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

    if (hasCycleBrute(head))
        cout << "Cycle detected " << endl;
    else
        cout << "No cycle " << endl;

    return 0;
}
