#include <iostream>
using namespace std;

//Fibonacci -> 0,1,1,2,3,5,8,13,21.....
//recursice relation -> f(n) = f(n-1) + f(n-2)
int fib(int n){
    if(n == 0) return 0;
    if(n==1) return 1;

    int ans = fib(n-1) + fib(n-2);
    return ans;
}


int main(){

}