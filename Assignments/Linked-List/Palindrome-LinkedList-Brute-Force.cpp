#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};


// Approach: Store the values in a vector and check if the vector is a palindrome
// Time Complexity: O(n)
// Space Complexity: O(n)
bool isPalindromeBrute(ListNode* head) {
    vector<int> vals;
    while (head != NULL) {
        vals.push_back(head->val);
        head = head->next;
    }

    int i = 0, j = vals.size() - 1;
    while (i < j) {
        if (vals[i] != vals[j]) return false;
        i++; j--;
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

    cout << "Result: ";
    cout << (isPalindromeBrute(head) ? "true" : "false") << endl;

    return 0;

    // Output:
    // Result: true
}
