/*
Give array example with best case, worst case and average case

it finds the smallest element in rhs and replace it with i whatever is smallest
*/


#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    //i will start from 0 and go till the second last element
    for (i = 0; i < n-1; i++) {
        minIndex = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[minIndex])
                minIndex = j;
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
        // swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    for (int i=0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
