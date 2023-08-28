#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    //outer loop is for the rouds, if we are given with n length array, then we will get the final sorted array after n-1 iterations
    for (int i = 0; i < n-1; i++){
        //first show j < n out of index error
        //the show j will go till n-1 bcz at last element when we compare j+1, it will go out of index
        //then optimise it by taking j < n-i, bcz after that array is already sorted

        bool swapped = false;
        for (int j = 0; j < n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}



int main(){
    int arr[6] = {4,2,6,3,9,8};

    bubbleSort(arr,6);
    
    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
}

//in this we swap the adjecent elements
// in round 1 the first largest element will go to its correct position
//total round will be (n-1)

// O(n^2) space O(1)
// Best case - already sorted  O(n)