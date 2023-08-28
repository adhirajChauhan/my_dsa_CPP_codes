/*
Types -
Single inheritance
Multiple inheritance
Hierarchical inheritance
Multilevel inheritance
Hybrid inheritance
*/

// Base class and Derieved class (parent child relationship)

/*
A Derived class is defined as the class derived from the base class.

The Syntax of Derived class:

class derived_class_name :: visibility-mode base_class_name
{
    visibility mode - public private or protected
    body of the derived class.
}

Notes -
1.When the base class is privately inherited by the derived class, public members of the base class becomes the private members of the derived class. Therefore, the public members of the base class are not accessible by the objects of the derived class only by the member functions of the derived class.

2.When the base class is publicly inherited by the derived class, public members of the base class also become the public members of the derived class. Therefore, the public members of the base class are accessible by the objects of the derived class as well as by the member functions of the base class.

3.In C++, the default mode of visibility is private.

4.The private members of the base class are never inherited.

----------------------------------------------------------------------------------------------------------------


1. Single level inheritance

Single inheritance is defined as the inheritance in which a derived class is inherited from the only one base class.
*/

#include <iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "Eating..." << endl;
    }
};
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking...";
    }
};

int main(void)
{
    Dog d1;
    d1.eat();
    d1.bark();
    return 0;
}
