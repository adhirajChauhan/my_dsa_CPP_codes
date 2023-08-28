#include <iostream>
using namespace std;

class Y; // forward Declaration
class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }


    //This doesnt mean that sumcomplex can be accessed from obj of complex classes, it only means that sum complex have special permission to access private members of complex class
    friend void add(X, Y);
};

class Y
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }

    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "Adding the object value of A and B : " << o1.data + o2.data << endl;
}

int main()
{
    X x1;
    x1.setValue(10);

    Y y1;
    y1.setValue(5);

    add(x1, y1);
}