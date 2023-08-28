#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        int minIndex = i;

        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main(){

    int arr[6] = {4,2,6,3,9,8};

    selectionSort(arr,6);
    
    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
}

//in this we first search in entire array for smallest value and replace it at arr[0]
//then we inc i
//and search in right array for smallest value and replace it at arr[1]

//Space com O(1)
//time O(n^2)

//Best case O(n^2) bcz we have to eventually iterate even if it is already sorted