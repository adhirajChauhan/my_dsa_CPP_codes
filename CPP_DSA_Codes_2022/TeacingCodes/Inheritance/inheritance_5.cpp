/*
Ambiquity Resolution in Inheritance
Ambiguity can be occurred in using the multiple inheritance when a function with the same name occurs in more than one base class.

Let's understand this through an example:
*/

#include <iostream>
using namespace std;
class A
{
public:
    void display()
    {
        std::cout << "Class A" << std::endl;
    }
};
class B
{
public:
    void display()
    {
        std::cout << "Class B" << std::endl;
    }
};
class C : public A, public B
{
    void view()
    {
        //First show this //display();
        A::display();
        B::display();
    }
};
int main()
{
    C c;
    //First show this //c.display();
    c.A::display();
    return 0;
}