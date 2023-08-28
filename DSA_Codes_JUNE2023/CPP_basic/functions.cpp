#include <iostream>
using namespace std;

int power(int base, int exp){
    int ans = 1;
    for(int i = 1; i <= exp; i++){
        ans = ans * base;
    }

    return ans;
}

int main(){
    int a,b;

    cin >> a >> b;
    cout << power(a,b);
    // int ans = 1;

    // for(int i = 1; i <= b; i++){
    //     ans = ans * a;
    // }

    // cout << "ans is : " << ans << endl;

    // int c,d;

    // cin >> c >> d;

    // ans = 1;

    // for(int i = 1; i <= d; i++){
    //     ans = ans * c;
    // }

    // cout << "ans is : " << ans << endl;
}

//odd/even function