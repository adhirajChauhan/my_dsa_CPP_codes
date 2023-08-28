#include <iostream>
using  namespace std;

void merge(int *arr, int s, int e){
    int mid = s +(e-s)/2;

    //find the length of left splitted array, adding 1 bcz while calculating index we sub 1, to find size we are adding 1
    int len1 = mid - s + 1;
    //find the length of right splitted array
    int len2 = e - mid;

    //creating 2 new arrays
    int *first = new int[len1];
    int *second = new int[len2];

    //copy values from s -> mid in first array
    //k represents main array index
    int k = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[k++];
    }

    //copy values from mid+1 till end in second array
    k = mid+1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[k++];
    }

    //after values are copied in new arrays 
    //we sort and merge two arrays 
    int index1 = 0;
    int index2 = 0; 

    k = s;
    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[k++] = first[index1++];
        }
        else{
            arr[k++] = second[index2++];
        }
    }   

    //need to check for single elements
    while(index1 < len1){
        arr[k++] = first[index1++];
    }

    while(index2 < len2){
        arr[k++] = second[index2++];
    }

    delete []first;
    delete []second;

    //gfg application link
}

void mergeSort(int *arr, int s , int e){
    //base case
    //single element or s > e, means already sorted
    if(s >= e){
        return;
    }

    int mid = s +(e-s)/2;
    //sort the left part
    mergeSort(arr, s, mid);

    //sort the right part
    mergeSort(arr, mid+1, e);

    //merge
    merge(arr, s,e);
}

int main(){
    int arr[5] = {2,5,1,6,9};

    int n = 5;

    mergeSort(arr,0,n-1);

    for(int i =0; i < n; i++){
        cout << arr[i] << endl;
    }
}