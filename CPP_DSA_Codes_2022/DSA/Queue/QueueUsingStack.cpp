#include <iostream>
#include <stack>
using namespace std;

// enque operation -> push x to stack1
// dequeue operation -> 1. if both stacks are empty, print error
// 2. if stack 2 is empty
// while stack1 is not empty, push everything from stack1 to stack2
// 3. pop elements from stack2 and return it

class Queue
{
    stack<int> s1;
    stack<int> s2;

    public:
    void push(int x){
        s1.push(x);
        //O(1)
    }

    int pop(){
        //O(n)
        if(s1.empty() && s2.empty()){
            cout << "Queue is empty " << endl;
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topVal = s2.top();
        s2.pop();
        return topVal;
    }

    bool empty(){
        if(s1.empty() && s2.empty()){
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
    cout << q.pop()<<endl;
    q.push(4);
    cout << q.pop()<<endl;
    cout << q.pop()<<endl;
    cout << q.pop()<<endl;
    cout << q.pop()<<endl;

}