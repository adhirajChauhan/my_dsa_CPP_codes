//delete middle element from stack

#include <iostream>
using namespace std;
#include <stack>

void solve(stack<int>&inputStack, int count, int size) {

    
}

void deleteMiddle(stack<int>&inputStack,int count,int size){
    if (inputStack.empty() || count == size/2 - 1) {
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    // Recursive call
    deleteMiddle(inputStack, count+1, size);

    inputStack.push(num);

}

int main() {
    std::stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);

    int size = s.size();

    std::cout << "Stack before deletion: ";
    std::stack<int> tempStack = s; // Create a temporary stack to print the elements
    while (!tempStack.empty()) {
        std::cout << tempStack.top() << " ";
        tempStack.pop();
    }
    std::cout << std::endl;

    deleteMiddle(s, 0, size);

    std::cout << "Stack after deletion: ";
    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << std::endl;

    return 0;
}