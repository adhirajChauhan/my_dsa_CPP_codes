/*

An exception is a problem that arises during the execution of a program

throw − A program throws an exception when a problem shows up. This is done using a throw keyword.

catch − A program catches an exception with an exception handler at the place in a program where you want to handle the problem. The catch keyword indicates the catching of an exception.

try − A try block identifies a block of code for which particular exceptions will be activated. It's followed by one or more catch blocks.


---------------------------------------

Assuming a block will raise an exception, a method catches an exception using a combination of the try and catch keywords. A try/catch block is placed around the code that might generate an exception. Code within a try/catch block is referred to as protected code, and the syntax for using try/catch as follows −

try {
   // protected code
} catch( ExceptionName e1 ) {
   // catch block
} catch( ExceptionName e2 ) {
   // catch block
} catch( ExceptionName eN ) {
   // catch block
}
You can list down multiple catch statements to catch different type of exceptions in case your try block raises more than one exception in different situations.

--------------------------------------------------
*/

#include <iostream>
using namespace std;

double division(int a, int b) {
   if( b == 0 ) {
      throw -1;
   }
   return (a/b);
}

int main () {
   int x = 50;
   int y = 0;
   int z = 0;
 
   try {
      z = division(x, y);
      cout << z << endl;
   } catch (int e) {
     cout << e << endl;
   }

   return 0;
}