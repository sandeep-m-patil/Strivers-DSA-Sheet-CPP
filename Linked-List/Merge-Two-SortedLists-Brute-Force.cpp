#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};
// Approach: Use a brute force method to merge two sorted linked lists
// Time Complexity: O((m+n) log (m+n)) due to sorting the combined list
// Space Complexity: O(m+n) for storing the values in a vector
ListNode* mergeTwoListsBrute(ListNode* l1, ListNode* l2) {
    vector<int> vals;
    while (l1) {
        vals.push_back(l1->val);
        l1 = l1->next;
    }
    while (l2) {
        vals.push_back(l2->val);
        l2 = l2->next;
    }

    sort(vals.begin(), vals.end());

    ListNode* dummy = new ListNode(0);
    ListNode* temp = dummy;
    for (int val : vals) {
        temp->next = new ListNode(val);
        temp = temp->next;
    }
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

    cout << "Merged List : ";
    ListNode* merged = mergeTwoListsBrute(list1, list2);
    printList(merged);
    return 0;

    // Output:
    // Merged List : 1 1 2 3 4 4 

}
