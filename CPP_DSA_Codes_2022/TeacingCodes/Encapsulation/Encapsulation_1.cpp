/*
 Encapsulation is defined as binding together the data and the functions that manipulate them.

 -> Show example of a capsule pic names class which have function and var inside it


Consider a real-life example of encapsulation, in a company, there are different sections like the accounts section, finance section, sales section, etc. Now,

    The finance section handles all the financial transactions and keeps records of all the data related to finance.
    Similarly, the sales section handles all the sales-related activities and keeps records of all the sales.

    Now there may arise a situation when for some reason an official from the finance section needs all the data about sales in a particular month.

    In this case, he is not allowed to directly access the data of the sales section. He will first have to contact some other officer in the sales section and then request him to give the particular data.

    *Features of Encapsulation

    1.We can not access any function from the class directly. We need an object to access that function that is using the member variables of that class.

    2. Increase in the security of data
    3. It helps to control the modification of our data members.
*/

#include <iostream>
using namespace std;

class Encapsulation
{
private:
    // Data hidden from outside world
    int x;

public:
    // Function to set value of
    // variable x
    void set(int a) { x = a; }

    // Function to return value of
    // variable x
    int get() { return x; }
};

// Driver code
int main()
{
    Encapsulation obj;
    obj.set(5);
    cout << obj.get();
    return 0;
}

/*
Explanation: In the above program, the variable x is made private. This variable can be accessed and manipulated only using the functions get() and set() which are present inside the class. Thus we can say that here, the variable x and the functions get() and set() are bound together which is nothing but encapsulation.

Role of Access Specifiers in Encapsulation
Access specifiers facilitate Data Hiding in C++ programs by restricting access to the class member functions and data members. There are three types of access specifiers in C++:

Private
Protected
Public
*/