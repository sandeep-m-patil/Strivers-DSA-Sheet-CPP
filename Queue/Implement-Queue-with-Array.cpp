#include <bits/stdc++.h>
using namespace std;

class Queue
{
private:
    int f, r, size;
    int *arr;

public:
    Queue(int c)
    {
        size = c;
        arr = new int[size];
        f = r = -1;
    }

    bool isFull()
    {
        return r == size - 1;
    }

    bool isEmpty()
    {
        return f == -1 || f > r;
    }

    void enqueue(int x)
    {
        if (isFull())
        {
            cout << "Queue is Full\n";
            return;
        }
        if (isEmpty())
            f = 0;
        arr[++r] = x;
        cout << x << " enqueued\n";
    }

    int dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty\n";
            return -1;
        }
        int value = arr[f++];
        cout << value << " dequeued\n";
        return value;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty\n";
            return -1;
        }
        return arr[f];
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty\n";
            return;
        }
        cout << "Queue: ";
        for (int i = f; i <= r; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor — `delete[] arr;` is called automatically
    ~Queue()
    {
        delete[] arr;
    }
};

int main()
{
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.display();

    q.dequeue();
    q.display();

    cout << "Front: " << q.peek() << endl;

    return 0;

    /*
    Ouput:
    1 enqueued
2 enqueued
3 enqueued
4 enqueued
5 enqueued
Queue: 1 2 3 4 5
1 dequeued
Queue: 2 3 4 5
Front: 2
*/
}
