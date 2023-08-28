#include <iostream>
using namespace std;

void update(int n){
    n++;
}

void refUpdate(int& n){
    n++;
}

int main(){
    //Reference variable
    // int i = 5; //normal var

    // int& j = i; //reference var

    // cout << i << endl;
    // i++;
    // cout << i << endl;
    // j++;
    // cout << j;
    //j is also the name of that var whose name is i

    //give revision of pass by value

    int n = 5;

    cout << "Before " << n << endl;
    refUpdate(n);
    cout << "After " << n << endl;

    //refUpdate is changing the calue bcz ref var has been created as a parameter which is not duplication n in fuction but actually referencing to the same n 
    //pass by reference (new memory is not created)


}