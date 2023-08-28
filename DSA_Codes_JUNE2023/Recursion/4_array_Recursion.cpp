#include <iostream>
using  namespace std;

//is array sorted
//base case -> if array has only no/one element then sorted
bool isSorted(int arr[], int size){
    //base
    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0] > arr[1]){ //checking first and second element, if cond is true then it is not sorted
        return false;
    }

    else{
        //else we will check the remaning right part of array
        bool remainingPart = isSorted(arr + 1, size - 1); //moving one step ahead in arr and size will be one less
        return remainingPart;
    }
}

//find sum of all the elements in array 

int getSum(int arr[], int size){
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }

    int remainingPart = getSum(arr + 1, size - 1);
    int sum = arr[0] + remainingPart;
    return sum;

}

int main(){
    int arr[] = {2,4,6,8,1,10};
    int size = 6;

    bool ans = isSorted(arr, size);

    if(ans){
        cout << "Array sorted" << endl;
    }
    else{
        cout <<"Array not sorted" << endl;
    }

    cout << getSum(arr,size) << endl;
}