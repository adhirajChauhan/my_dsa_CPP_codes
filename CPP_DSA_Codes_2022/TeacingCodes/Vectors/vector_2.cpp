#include <iostream>
#include <vector>
using namespace std;

/*
C++ Vector Iterators
    Vector iterators are used to point to the memory address of a vector element. In some ways, they act like pointers in C++.

    We can create vector iterators with the syntax

    vector<T>::iterator iteratorName;

    For example, if we have 2 vectors of int and double types, then we will need 2 different iterators corresponding to their types:

    iterator for int vector
    vector<int>::iterator iter1;

    iterator for double vector
    vector<double>::iterator iter2;

-------------------------------------------------------------------------------------------------------------

    We can initialize vector iterators using the begin() and end() functions.

1. begin() function

The begin() function returns an iterator that points to the first element of the vector. For example,

vector<int> num = {1, 2, 3};
vector<int>::iterator iter;

iter points to num[0]
iter = num.begin();
2. end() function

The end() function points to the theoretical element that comes after the final element of the vector. For example,

iter points to the last element of num
iter = num.end() - 1;
Here, due to the nature of the end() function, we have used the code num.end() - 1 to point to the last element of the num vector i.e. num[2].

Example: C++ Vector Iterators
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> num {1, 2, 3, 4, 5};

  declare iterator
  vector<int>::iterator iter;

  initialize the iterator with the first element
  iter = num.begin();

  print the vector element
  cout << "num[0] = " << *iter << endl;

  iterator points to the 3rd element
  iter = num.begin() + 2;
  cout << "num[2] = " << *iter;

  iterator points to the last element
  iter = num.end() - 1;
  cout << "num[4] = " << *iter;

  return 0;
}




------------------------------------------------------------------------------------------------

Example: Iterate Through Vector Using Iterators
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> num {1, 2, 3, 4, 5};

  // declare iterator
  vector<int>::iterator iter;

  // use iterator with for loop
  for (iter = num.begin(); iter != num.end(); ++iter) {
    cout << *iter << "  ";
  }

  return 0;
}
*/