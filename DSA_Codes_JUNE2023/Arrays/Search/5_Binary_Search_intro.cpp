#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;

    int mid = (start + end)/2;
    //int min = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }

        //goto right part
        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        } 
        mid = (start+end)/2;
    }
    return -1;

}

int main(){
    //BS works on monotonic fn (inc or dec)
    //algo - find min (s+e)/2
    //compare mid with key
    //if == return
    // if not== go to left or right (shifting s and e)

    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {2,3,5,6,7};

    int evenIndex = binarySearch(even, 6, 12);
    cout << "Index of 12 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 7);
    cout << "Index of 7 is " << oddIndex << endl;

}