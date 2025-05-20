#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Best Time Complexity is O(N^2)
// Brute-force method to construct a linked list
Node* constructLLBruteForce(vector<int>& arr) {
    if (arr.empty()) return nullptr; // Handle empty case

    Node* head = new Node(arr[0]); // First node

    for (int i = 1; i < arr.size(); i++) {
        Node* newNode = new Node(arr[i]); // Create a new node

        // Traverse from head to the end to insert at last position
        Node* temp = head;
        while (temp->next) {  // This makes it O(N) for each insertion
            temp = temp->next;
        }
        temp->next = newNode;  // Insert at last position
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
