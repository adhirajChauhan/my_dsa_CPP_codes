#include <iostream>
using namespace std;

//we can also create function by reference return type
//this is a bad practice bcz num and ans are local var, pnce their scope is finished, func will not return anything
int& func(int a){
    int num = a;
    int& ans = a;
    return ans;
}
int* func1(int n){
    int* ptr = &n;
    return ptr;
}

int main(){
    int n = 5;
    // func(n);
    func1(n);
}