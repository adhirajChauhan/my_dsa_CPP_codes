#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    // Created a constructor
    Number()
    {
        a = 0;
    }

    // Parametrised constructor
    Number(int num)
    {
        a = num;
    }

    //By default, a copy constructor is called automaticaaly,
    //we can create out own copy constructor
    Number(Number &obj){
        cout << "Copy constructor called " << endl;
        a = obj.a;

    }

    // function displaying out thr value of a
    void display()
    {
        cout << "The number for this object is : " << a << endl;
    }
};

int main()
{
    Number n1, n2, n3(10);

    n1.display();
    n2.display();
    n3.display();

    // Two ways of creating copy constructor
    // Number n4(n3);
    Number n4 = n3;
    n4.display();
}