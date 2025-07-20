#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int v) {
        data = v;
        next = nullptr;
    }
};

class Queue {
private:
    Node* f;  
    Node* r;  

public:
    Queue() {
        f = r = nullptr;
    }

    void enqueue(int x) {
        Node* newNode = new Node(x);
        if (r == nullptr) {
            f = r = newNode;
        } else {
            r->next = newNode;
            r = newNode;
        }
    }

    void dequeue() {
        if (f == nullptr) {
            cout << "Queue is empty\n";
            return;
        }
        Node* temp = f;
        f = f->next;
        if (f == nullptr) {
            r = nullptr;
        }

        cout << "Dequeued: " << temp->data << endl;
        delete temp;
    }

    int peek() {
        if (f == nullptr) {
            cout << "Queue is empty\n";
            return -1;
        }
        return f->data;
    }

    void display() {
        if (f == nullptr) {
            cout << "Queue is empty\n";
            return;
        }
        Node* temp = f;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    ~Queue() {
        while (f != nullptr)
            dequeue();
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display();

    cout << "Front element: " << q.peek() << endl;

    return 0;

    /*
    Ouput:
    10 20 30 
    dequeue: 10
    20 30 
    Front element: 20
    dequeue: 20
    dequeue: 30
    */
}
