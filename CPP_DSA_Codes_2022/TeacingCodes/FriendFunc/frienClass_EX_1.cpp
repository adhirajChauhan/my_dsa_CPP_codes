#include <iostream>
using namespace std;
// friend class

class Complex;
class Calculator
{

public:
    // int add(int a, int b)
    // {
    //     return a + b;
    // }

    //first show declration here only for real part
    int sumRealOfComplex(Complex, Complex);
    int sumComlexOfComplex(Complex, Complex);
};

class Complex
{
    int a, b;

    // Giving permission to sumComplex function of calculator class
    friend int Calculator ::sumRealOfComplex(Complex o1, Complex o2);
    friend int Calculator ::sumComlexOfComplex(Complex o1, Complex o2);
    // friend class Calculator;


public:
    void setNumber(int num1, int num2)
    {
        a = num1;
        b = num2;
    }

    void printNumber()
    {
        cout << "Your number is : " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealOfComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator :: sumComlexOfComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1,2);
    o2.setNumber(2,3);

    Calculator calc;
    int ans = calc.sumRealOfComplex(o1,o2);
    cout << "Sum of real part is : " << ans << endl;

    int ansComplex = calc.sumComlexOfComplex(o1, o2);
    cout << "Sum of complex part is : " << ansComplex << endl;
}