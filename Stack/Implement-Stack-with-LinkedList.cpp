#include <iostream>
using namespace std;

// Define a Node structure
struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Stack class using Linked List
class Stack {
private:
    Node* topNode; // Points to the top of the stack

public:
    // Constructor
    Stack() {
        topNode = nullptr;
    }

    // Push element onto stack
    void push(int x) {
        Node* newNode = new Node(x);
        newNode->next = topNode;
        topNode = newNode;
    }

    // Pop element from stack
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return -1;
        }
        int val = topNode->data;
        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;
        return val;
    }

    // Return top element
    int top() {
        if (isEmpty()) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return topNode->data;
    }

    // Check if stack is empty
    bool isEmpty() {
        return topNode == nullptr;
    }

    
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top: " << s.top() << endl;     // 30
    cout << "Pop: " << s.pop() << endl;     // 30
    cout << "Top: " << s.top() << endl;     // 20
    cout << "Is empty? " << (s.isEmpty() ? "Yes" : "No") << endl; // No

    s.pop();
    s.pop();
    cout << "Is empty after all pops? " << (s.isEmpty() ? "Yes" : "No") << endl; // Yes

    return 0;
    /*
    Output:
    Top: 30
    Pop: 30
    Top: 20
    Is empty? No
    Is empty after all pops? Yes
    */
}

