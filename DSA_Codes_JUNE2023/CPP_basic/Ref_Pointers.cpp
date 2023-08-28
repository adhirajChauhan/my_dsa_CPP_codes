#include <iostream>
using namespace std;

int main()
{
    int var = 10;
    float var1 = 20.2f;
    // cout << &var << endl; //address of var in memory
    // cou#it << &var1;

    //A pointer is a variable whose value is the address of another variable. First we have to declaare a pointer
    // type *varName

    int *ptr;
    ptr = &var;

    cout << &var << endl; //Address of var
    cout << ptr << endl; //Address of var
    cout << *ptr << endl; //derefrencing the pointer
    cout << &ptr << endl; //Address of pointer var in memory

}