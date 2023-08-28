#include <iostream>
using  namespace std;

    void print(int arr[], int s, int e){
        for(int i = s; i <= e; i++){
            cout << arr[i] << " ";
        } cout << endl;
    }

bool binarySearch(int arr[], int s, int e, int k){
    cout << endl;
    print(arr, s,e);

    //base case
    if(s>e){
        return false;
    }

    int mid = s +(e-s)/2;
    cout << "Value of arr mid is " << arr[mid] << endl;
    //base case
    if(arr[mid] == k){
        return true;
    }
    if(arr[mid] < k){
        //goto right part
        return binarySearch(arr, mid+1, e,k);
    }
    else{
        //goto right aprt
        return binarySearch(arr, s, mid-1, k);
    }

}

int main(){
    int arr[6] = {3,5,8,10,14,19};
    int size = 6;
    int key = 3;

    cout << "Present or not : " << binarySearch(arr, 0,size,key);
}