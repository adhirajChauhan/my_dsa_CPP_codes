#include <iostream>
using namespace std;

int main(){

    //show how string is 1D char array
    // null char \0 issue while taking input when we give space

    char name[10];

    cout << "Name : " << endl;
    cin >> name;

    cout << "Your name is ";
    cout << name << endl;
    //show is array null char happens due to space, tab, new line esc char

}