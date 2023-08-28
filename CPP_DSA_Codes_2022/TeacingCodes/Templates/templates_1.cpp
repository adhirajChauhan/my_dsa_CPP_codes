/*
Templates

 - Templates are powerful features of C++ which allows us to write generic programs. There are two ways we can     implement templates:

    Two types
    - Function Templates
    - Class Templates


    --------------------------------------------------------------------------------------------

    Class Template Declaration
    A class template starts with the keyword template followed by template parameter(s) inside <> which is followed by the class declaration.

    template <class T>
    class className {
        private:
            T var;
            ... .. ...
        public:
            T functionName(T arg);
            ... .. ...
    };
    In the above declaration, T is the template argument which is a placeholder for the data type used, and class is a keyword.

    Inside the class body, a member variable var and a member function functionName() are both of type T.
    
    --------------------------------------------------------------------------------------------------

    Example 1: C++ Class Templates
// C++ program to demonstrate the use of class templates

#include <iostream>
using namespace std;

// Class template
template <class T>
class Number {
   private:
    // Variable of type T
    T num;

   public:
    Number(T n) : num(n) {}   // constructor

    T getNum() {
        return num;
    }
};

int main() {

    // create object with int type
    Number<int> numberInt(7);

    // create object with double type
    Number<double> numberDouble(7.7);

    cout << "int Number = " << numberInt.getNum() << endl;
    cout << "double Number = " << numberDouble.getNum() << endl;

    return 0;
}
*/