#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor with both data and next node
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor with only data (assuming next is initially null)
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to print the linked list
void printLL(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
}

// Function to insert a new node at the head of the linked list
// Time Complexity: O(n), where n is the number of nodes in the linked list.
// Space Complexity: O(1) (constant extra space).
Node* insertEnd(Node* head, int val) {
    Node* temp = new Node(val);
    if(head==nullptr){
        return temp;
    }
    Node* start = head;
    while(start->next!=nullptr){
        start=start->next;
    }
    start->next = temp;
    return head;
}

int main() {
    // Sample array and value for insertion
    vector<int> arr = {12, 8, 5, 7};
    int val = 100;

    // Creating a linked list with initial elements from the array
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);

    // Inserting a new node at the end of the linked list
    head = insertEnd(head,val);

    // Printing the linked list
    printLL(head);

    return 0;

    /*
    Ouput:
    12 8 5 7 100
    */
}