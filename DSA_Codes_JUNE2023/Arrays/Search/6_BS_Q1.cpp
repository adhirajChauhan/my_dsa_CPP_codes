#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int s = 0;
    int e = n -1;
    int mid = (s+e)/2;
    int ans = -1; //it will store if key is found

    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1; //obviously we will find first occ on its left
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }

        mid = (s + e)/2;

    }
    return ans;
}

int lastOcc(int arr[], int n, int key){
    int s = 0;
    int e = n -1;
    int mid = (s+e)/2;
    int ans = -1; //it will store if key is found

    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1; //obviously we will find last occ on its right
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }

        mid = (s + e)/2;

    }
    return ans;
}

int main(){
    int even[5] = {1,2,3,3,5};

    cout << "First occurance of 3 is " << firstOcc(even, 5, 3) << endl;
    cout << "Last occurance of 3 is " << lastOcc(even, 5, 3) << endl;
}

//find first and last occurance of an element in a given sorted array
//that means left most and right most occurance
//if not present return -1
//duplicate elements can exist
//eg {1,2,3,3,5} leftmost of 3 at 3 and rightmost at 4
