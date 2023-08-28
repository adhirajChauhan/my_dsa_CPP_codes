#include <iostream>
#include <vector>
using namespace std;

/*
- Vectors are used to store elements of similar data types. However, unlike arrays, the size of a vector can grow dynamically.

- we can change the size of the vector during the execution of a program as per our requirements.

- Vectors are part of the C++ Standard Template Library. To use vectors, we need to include the vector header file in our program.

    1. C++ Vector Initialization
        // Initializer list
        vector<int> vector1 = {1, 2, 3, 4, 5};
         or
        vector<int> vector2 {1, 2, 3, 4, 5};
        or
        vector<int> vector3(5, 12);
        Here, 5 is the size of the vector and 12 is the value.
*/

// int main(){
//   // initializer list
//   vector<int> vector1 = {1, 2, 3, 4, 5};

//   // uniform initialization
//   vector<int> vector2{6, 7, 8, 9, 10};

//   // method 3
//   vector<int> vector3(5, 12);

//   cout << "vector1 = ";

//   for(int i = 0; i < vector1.size() ; i++){
//     cout << vector1[i] << " ";
//   }

//   cout << "Vector 2 = ";

//     for(int i = 0; i < vector3.size() ; i++){
//     cout << vector3[i] << " ";
//   }
// }

/*
Basic Vector Operations
The vector class provides various methods to perform different operations on vectors. We will look at some commonly used vector operations in this tutorial:

Add elements
Access elements
Change elements
Remove elements

cplusplus.com

To add a single element into a vector, we use the push_back() function. It inserts an element into the end of the vector. For example,

*/

// int main(){
//     vector<int> vector1 = {1, 2, 3, 4, 5};

//     cout << "Initial vector :  ";

//     for(int i = 0; i < vector1.size() ; i++)
//     {
//         cout << vector1[i] << " " ;
//     }

//     vector1.push_back(6);
//     vector1.push_back(7);

//     cout << "Updated vector : " << " ";

//     for(int i = 0; i < vector1.size() ; i++)
//     {
//         cout << vector1[i] << " ";
//     }
// }


/*

    2. Access Elements of a Vector

    In C++, we use the index number to access the vector elements. Here, we use the at() function to access the element from the specified index. For example,

    int main() {
    vector<int> num {1, 2, 3, 4, 5};

    cout << "Element at Index 0: " << num.at(0) << endl;
    cout << "Element at Index 2: " << num.at(2) << endl;
    cout << "Element at Index 4: " << num.at(4);

    return 0;
    }

------------------------------------------------------------------------------------------------------------


    Note: Like an array, we can also use the square brackets [] to access vector elements. For example,

    vector<int> num {1, 2, 3};
    cout << num[1];  // Output: 2
    However, the at() function is preferred over [] because at() throws an exception whenever the vector is out of bound, while [] gives a garbage value.

    vector<int> num {1, 2, 3};

    gives garbage value
    cout << num[4];

    throws an exception
    cout << num.at(4);

*/

//-------------------------------------------------------------------------------------------------------------

/*
3. Change Vector Element
    We can change an element of the vector using the same at() function. For example,

    int main() {
    vector<int> num {1, 2, 3, 4, 5};

    cout << "Initial Vector: ";

    for (int i = 0; i < num.size(); i++) {
        cout << i << "  ";
    }

    change elements at indexes 1 and 4
    num.at(1) = 9;
    num.at(4) = 7;

    Next example
    num.pop_back()

    cout << "\nUpdated Vector: ";

    for (const int& i : num) {
        cout << i << "  ";
    }

    return 0;
    }

*/


//-------------------------------------------------------------------------------------------------------------

/*
    4. Delete Elements from C++ Vectors
    To delete a single element from a vector, we use the pop_back() function. For example,


*/
