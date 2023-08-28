#include <iostream>
using namespace std;

void dummy(int n){
    n++;
    cout << "dummy method n is : " << n << endl;
}
int main(){
    int n;
    cin >> n;

    dummy(n);

    cout << "main method n is : " << n << endl;
}