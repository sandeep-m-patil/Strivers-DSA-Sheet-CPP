#include <iostream>
#include <stack>
using namespace std;

class MyQueue
{
private:
    stack<int> s1, s2;

public:
    MyQueue()
    {
        // Constructor
    }

    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int front = s2.top();
        s2.pop();
        return front;
    }

    int peek()
    {
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    bool empty()
    {
        return s1.empty() && s2.empty();
    }
};

int main()
{
    MyQueue myQueue;

    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);
    myQueue.push(4);
    myQueue.push(5);

    cout << "Peek: " << myQueue.peek() << endl;                        // Output: 1
    cout << "Pop: " << myQueue.pop() << endl;                          // Output: 1
    cout << "Empty? " << (myQueue.empty() ? "true" : "false") << endl; // Output: false

    myQueue.pop();                                                                      // Queue: []
    cout << "Empty after second pop? " << (myQueue.empty() ? "true" : "false") << endl; // true

    return 0;

    /*
    Output:

    Peek: 1
    Pop: 1
    Empty? false
    Empty after second pop? false
    */
}
