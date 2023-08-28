#include <iostream>
using namespace std;

//function calling itself
//when the solution of a big problem is depend upon smaller problem of same type
//give eg of 2^n and factorial from video

int factorial(int n){

    //base case
    if(n == 0){
        return 1;
    }

    int smallProblem = factorial(n-1); //see video
    int bigProblem = n * smallProblem;

    return bigProblem;

    // return n * factorial(n-1);
}

int power(int n){
    //2^n = 2 * 2^n-1
    //f(n) = 2 * f(n-1)
    //Base case
    if(n==0) return 1;

    //recursive relation
    int smallerProb = power(n-1);
    int biggerProb = 2 * smallerProb;

    return biggerProb;
}
int main(){

    int n;
    cin >> n;

    int ans = factorial(n);

    cout << ans << endl;

    int powerAns = power(10);
    cout << powerAns << endl;

}