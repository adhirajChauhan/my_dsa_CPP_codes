/*
Function overloading

    -   Function Overloading is defined as the process of having two or more function with the same name, but different in parameters is known as function overloading in C++. In function overloading, the function is redefined by using either different types of arguments or a different number of arguments. It is only through these differences compiler can differentiate between the functions.

    -   The advantage of Function overloading is that it increases the readability of the program because you don't need to use different names for the same action.
*/

// #include <iostream>
// using namespace std;
// class Cal
// {
// public:
//     static int add(int a, int b)
//     {
//         return a + b;
//     }
//     static int add(int a, int b, int c)
//     {
//         return a + b + c;
//     }
// };
// int main(void)
// {
//     Cal C; //     class object declaration.
//     cout << C.add(10, 20) << endl;
//     cout << C.add(12, 20, 23);
//     return 0;
// }

//------------------------------------------------------------------------------------

// Program of function overloading with different types of arguments.

// #include <iostream>
// using namespace std;
// int mul(int, int);
// float mul(float, int);

// int mul(int a, int b)
// {
//     return a * b;
// }
// float mul(double x, int y)
// {
//     return x * y;
// }
// int main()
// {
//     int r1 = mul(6, 7);
//     float r2 = mul(0.2, 3);
//     std::cout << "r1 is : " << r1 << std::endl;
//     std::cout << "r2 is : " << r2 << std::endl;
//     return 0;
// }

//------------------------------------------------------------------------------------------

/*
When the compiler shows the ambiguity error, the compiler does not run the program.

Causes of Function Overloading:

1.Type Conversion.
Function with default arguments.
*/

//------------------------------------------------------------------------------------------

// Type Conversion:
/// Let's see a simple example.

//#include <iostream>
// using namespace std;
// void fun(int);
// void fun(float);

// void fun(int i)
// {
//     std::cout << "Value of i is : " << i << std::endl;
// }
// void fun(float j)
// {
//     std::cout << "Value of j is : " << j << std::endl;
// }
// int main()
// {
//     fun(12);
//     fun(1.2);
//     return 0;
// }

/*
The above example shows an error "call of overloaded 'fun(double)' is ambiguous". The fun(10) will call the first function. The fun(1.2) calls the second function according to our prediction. But, this does not refer to any function as in C++, all the floating point constants are treated as double not as a float. If we replace float to double, the program works. Therefore, this is a type conversion from float to double.
*/





//------------------------------------------------------------------------------------------


/*
2.Function with Default Arguments
Let's see a simple example.

#include<iostream>  
using namespace std;  
void fun(int);  
void fun(int,int);
  
void fun(int i)  
{  
    std::cout << "Value of i is : " <<i<< std::endl;  
}  
void fun(int a,int b=9)  
{  
    std::cout << "Value of a is : " <<a<< std::endl;  
    std::cout << "Value of b is : " <<b<< std::endl;  
}  
int main()  
{  
    fun(12);  
   
    return 0;  
}  
The above example shows an error "call of overloaded 'fun(int)' is ambiguous". The fun(int a, int b=9) can be called in two ways: first is by calling the function with one argument, i.e., fun(12) and another way is calling the function with two arguments, i.e., fun(4,5). The fun(int i) function is invoked with one argument. Therefore, the compiler could not be able to select among fun(int i) and fun(int a,int b=9)
*/