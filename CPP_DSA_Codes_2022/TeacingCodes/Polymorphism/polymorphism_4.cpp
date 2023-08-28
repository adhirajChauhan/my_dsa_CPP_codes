/*
Runtime Polymorphism

This type of polymorphism is achieved by Function Overriding. Late binding and dynamic polymorphism are other names for runtime polymorphism. The function call is resolved at runtime in runtime polymorphism. In contrast, with compile time polymorphism, the compiler determines which function call to bind to the object after deducing it at runtime.

A. Function Overriding

    - Function Overriding occurs when a derived class has a definition for one of the member functions of the base class. That base function is said to be overridden.

Virtual Function
    - A virtual function is a member function that is declared in the base class using the keyword virtual and is re-defined (Overridden) in the derived class. 

Some Key Points About Virtual Functions:
    - A virtual function in C++ helps ensure you call the correct function via a reference or pointer.
    - Virtual functions are Dynamic in nature. 
    - They are defined by inserting the keyword “virtual” inside a base class and are always declared with a base class and overridden in a child class
    - A virtual function is called during Runtime
    - Below is the C++ program to demonstrate virtual function:
*/
#include <iostream>
using namespace std;
 
// Declaring a Base class
class Base {
 
public:
    // virtual function
    virtual void display()
    {
        cout << "Called virtual Base Class function" <<
                "\n\n";
    }
 
    void print()
    {
        cout << "Called Base print function" <<
                "\n\n";
    }
};
 
// Declaring a Child Class
class Child : public Base {
 
public:
    void display()
    {
        cout << "Called Child Display Function" <<
                "\n\n";
    }
 
    void print()
    {
        cout << "Called Child print Function" <<
                "\n\n";
    }
};
 
// Driver code
int main()
{
    // Create a reference of class GFG_Base
    Base* base;
 
    Child child;
 
    base = &child;
 
    // This will call the virtual function
    base->Base::display();
 
    // this will call the non-virtual function
    base->print();
}