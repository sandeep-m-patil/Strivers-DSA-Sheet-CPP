#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Set maximum stack size

class Stack {
private:
    int arr[MAX_SIZE]; // Internal array to hold elements
    int topIndex;      // Points to the top of the stack

public:
    // Constructor
    Stack() {
        topIndex = -1; // Stack is empty initially
    }

    // Push element onto stack
    void push(int x) {
        if (topIndex >= MAX_SIZE - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++topIndex] = x;
    }

    // Pop the top element
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[topIndex--];
    }

    // Peek at top element
    int top() {
        if (isEmpty()) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[topIndex];
    }

    // Check if stack is empty
    bool isEmpty() {
        return topIndex == -1;
    }

    // Check current size
    int size() {
        return topIndex + 1;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;   // 30
    cout << "Pop: " << s.pop() << endl;           // 30
    cout << "Top after pop: " << s.top() << endl; // 20
    cout << "Size: " << s.size() << endl;         // 2
    cout << "Is empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

    return 0;

    /*
    Output:
    Top element: 30
    Pop: 30
    Top after pop: 20
    Size: 2
    Is empty? No
    */
}

