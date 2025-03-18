#include <iostream>
#include <vector>
using namespace std;

// Node definition for singly linked list
class Node {
public:
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};
// Best Time Complexity is O(N)
// Function to construct a linked list from a vector
Node* constructLL(vector<int>& arr) {
    if (arr.empty()) return nullptr; // Handle empty case

    Node* head = new Node(arr[0]); // Create head node
    Node* curr = head;

    for (int i = 1; i < arr.size(); i++) {
        curr->next = new Node(arr[i]); // Create and link new node
        curr = curr->next;
    }

    return head;
}

// Function to print the linked list
void printLL(Node* head) {
    Node* curr = head;
    while (curr) {
        cout << curr->data << " -> ";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}


int main() {
    vector<int> arr = {1, 2, 3, 4, 5}; // Sample input

    Node* head = constructLL(arr); // Construct the linked list

    cout << "Linked List: ";
    printLL(head); // Print the linked list

    return 0;

    /*
    Output: 
    Linked List: 1 -> 2 -> 3 -> 4 -> 5 -> NULL
    */
}
