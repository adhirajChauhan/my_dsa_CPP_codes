// Queue array implementation

#include <iostream>
using namespace std;

#define n 20

class Queue
{
    int *arr;
    int front;
    int back;

public:
    Queue()
    {
        // alloacting memory to array
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x)
    {
        // first check if we have enough space in queue
        if (back == n - 1)
        {
            cout << "Queue Overflow" << endl;
            return;
        }

        // if we have space then we will increment the back pointer and add the value at end
        back++;
        arr[back] = x;

        // initially fromt pointer is at -1, in this case we will also shift that on the first element added
        if (front == -1)
        {
            front++;
        }
    }

    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "No elements in the queue" << endl;
            return;
        }

        // else we will just increment the front and not worry about the current value there
        front++;
    }

    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "No elements in the queue" << endl;
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        if (front == -1 || front > back)
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

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

}