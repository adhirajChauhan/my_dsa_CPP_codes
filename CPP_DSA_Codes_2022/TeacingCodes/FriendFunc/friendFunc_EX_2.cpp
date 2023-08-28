#include <iostream>
using namespace std;

//friend Function
//Add two complex numbers
//1 + 2i 
// 3 + 4i
// 4 + 6i

class Complex{
    int a, b;

    public:
    void setNumber(int num1, int num2){
        a = num1;
        b = num2;
    }

    void printNumber(){
        cout << "Your number is : " << a << " + " << b << "i" << endl;
    }

    //This doesnt mean that sumcomplex can be accessed from obj of complex classes, it only means that sum complex have special permission to access private members of complex class
    friend Complex sumComplex(Complex x, Complex y);
};

Complex sumComplex(Complex x, Complex y){
    Complex z;
    z.setNumber((x.a + y.a),(x.b + y.b));
    return z;
}

int main(){
    Complex c1, c2, sum;

    c1.setNumber(1,2);
    c1.printNumber();

    c2.setNumber(2,3);
    c2.printNumber();

    sum =sumComplex(c1,c2);
    sum.printNumber();
}

/*
Properties of frien function    
1. it doesnt lie in the scope of friend function
2. only has access to private and protected members
3. friend function cannot be called by object of complex class
4. usually contains the objects as args
5. can be declared in public or private section of class //line 23
6. cannot access members directly by their name i.e cout<<a and b is not valid, it needs object_name.member_name to access any member

*/