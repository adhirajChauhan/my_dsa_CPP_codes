#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int top;
    int size;

public:
    Stack()
    {
        arr = new int[size];
        top = -1;
    }

    void push(int val)
    {
        // We cant push if we are already at the last element of array
        if (top == size - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        // increment top first, because it will be at -1 initially
        top++;
        arr[top] = val;
    }

    void pop()
    {
        // pop will just bring back the pointer back and we are not concerned witht the value , it will be considered as garbage value and will be overwritten when we push again
        if (top == -1)
        {
            cout << "No elements to pop" << endl;
            return;
        }
        top--;
    }

    int Top()
    {
        if (top == -1)
        {
            cout << "No elements in stack" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        //it will return true if stack is empty
        return top==-1;
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout << "Stack is empty" << endl;
            return -1;
        }
    }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.Top()<<endl;
    st.pop();
    cout << st.Top()<<endl;
    

}