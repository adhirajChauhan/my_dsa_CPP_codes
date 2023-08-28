// operator overloading

//Operator overloading is a compile-time polymorphism in which the operator is overloaded to provide the special meaning to the user-defined data type. Operator overloading is used to overload or redefines most of the operators available in C++. It is used to perform the operation on the user-defined data type.

//tell this in next example
//return_type class_name  : : operator op(argument_list)  
//{  
     // body of the function.  
//}  

#include <iostream>
using namespace std;
class Test
{
private:
    int num;

public:
    Test(){
        num = 8;
    }
    void operator++()
    {
        num = num + 2;
    }
    void Print()
    {
        cout << "The Count is: " << num;
    }
};
int main()
{
    Test tt;
    ++tt; // calling of a function "void operator ++()"
    tt.Print();
    return 0;
}