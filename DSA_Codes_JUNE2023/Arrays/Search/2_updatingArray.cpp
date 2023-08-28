#include <iostream>
using namespace std;

void update(int arr[], int n){
    cout << "Printing from update function " << endl;

    //updating arrays first element
    arr[0] = 10;

    //printing the array
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " " << endl;
    }

    cout << "Going back to main function" << endl;

}
//Here the valur of array updated in update function will also be reflected in main func because in this case a copy is not being formed of the array like variables instead main arr has given its address to the update function (first index is represented by arr)
//so any operation applied in update arr (add, remove,etc) will change the original array
//keep in mind while updating
int main(){

    int arr[3] = {1,2,3};

    update(arr, 3);

    //printing the array
    cout << "Printing in main function " << endl;
    for(int i = 0; i < 3; i++){
        cout << arr[i] << " " << endl;
    }
    cout << endl;
}