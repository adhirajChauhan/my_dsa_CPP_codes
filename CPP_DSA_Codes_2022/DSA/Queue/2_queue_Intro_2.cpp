// Queue using LL
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Queue
{
    Node *front;
    Node *back;

public:
    Queue()
    {
        front = NULL;
        back == NULL;
    }

    void push(int x)
    {
        Node *n = new Node(x);

        // Empty queue
        if (front == NULL)
        {
            back = n;
            front = n;
            return;
        }
        back->next;
        back = n;
    }

    void pop()
    {
        // check if we have any element to pop
        if (front == NULL)
        {
            cout << "Queue Underflow" << endl;
            return;
        }

        // will move the front pointer forward
        Node *toDel = front;
        front = front->next;

        delete toDel;
    }

    int peek()
    {
        // this will return the value where front is pointing
        if (front == NULL)
        {
            cout << " No elements in the queue" << endl;
            return -1;
        }

        return front->data;
    }

    bool empty()
    {
        if (front == NULL)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
}