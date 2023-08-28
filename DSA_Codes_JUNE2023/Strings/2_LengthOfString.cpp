#include <iostream>
using namespace std;

//keep iterating over char array until we find null char

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }

    return count;
}

int main(){
    char name[10];

    cout << "Name : " << endl;
    cin >> name;

    cout << "Your name is ";
    cout << name << endl;

    cout << "Length : " << getLength(name) << endl;
}