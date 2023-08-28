/*
In this single  inheritance example, we are taking the base class as private

*/

#include <iostream>
using namespace std;
class A
{
    int a = 4;
    int b = 5;

public:
    int mul()
    {
        int c = a * b;
        return c;
    }
};

class B : private A
{
public:
    void display()
    {
        int result = mul();
        std::cout << "Multiplication of a and b is : " << result << std::endl;
    }
};
int main()
{
    B b;
    b.display();

    return 0;
}

/*
NOTE - 
The private member is not inheritable. If we modify the visibility mode by making it public, but this takes away the advantage of data hiding.

C++ introduces a third visibility modifier, i.e., protected. The member which is declared as protected will be accessible to all the member functions within the class as well as the class immediately derived from it.

Public: When the member is declared as public, it is accessible to all the functions of the program.

Private: When the member is declared as private, it is accessible within the class only.

Protected: When the member is declared as protected, it is accessible within its own class as well as the class immediately derived from it.



Base class visibility	                                     Derived class visibility
                                                      Public	       Private	      Protected
Private	                                            Not Inherited	Not Inherited	Not Inherited
Protected	                                          Protected	       Private	      Protected
Public	                                                Public	       Private	      Protected
*/