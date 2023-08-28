//Reference channel -> CodeHelp
//cppreference.com
#include <iostream>
#include <stack>
using namespace std;

//Implementing stack using STL

int main(){
    //creating stack
    stack<int> s;

    //push
    s.push(1);
    s.push(2);

    // s.pop();

    cout << "Top element : " << s.top() << endl;

    // if(s.empty()){
    //     cout << "Stack is empty" << endl;
    // }
    // else{
    //     cout << "Stack is empty" << endl;

    // }

    cout << "Size if stack is : " << s.size() << endl;
    
}

