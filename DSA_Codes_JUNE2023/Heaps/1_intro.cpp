/*

https://www.youtube.com/watch?v=NKJnHewiGdc&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=81

Heap is a complete binary tree (CBT) that comes with a heap order property.

- first explain what is BT

- CBT, in which every level will be completely filled except last level
and nodes are always added from the left

- go on google and search what is complete binary tree

*Heap order property
- Max heap -  in which child of each node will have min value than parent

properties of nodes - 
if node is at ith
left child -> 2 * i node
right child -> (2 * i + 1) node
parent -> i/2


- insertion in heap (with array)
    - insert at end of array
    - take it to correct position

*/

#include <iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i = 1; i <= size; i++){
            cout << arr[i] << " ";
        } cout << endl;
    }

    void deleteFromHeap(){
        if(size == 0){
            cout << "Nothing to delete";
            return;
        }

        //replace first node with last
        arr[1] = arr[size];
        //remove the ;ast element
        size--;

        //take root to its correct position
        int i = 1;
        while(i < size){
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;

            if(leftIndex < size && arr[i] < arr[leftIndex]){
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndex < size && arr[i] < arr[rightIndex]){
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else{
                return;
            }

        }
    }
};

void heapify(int arr[], int n, int i){
    //largest ko shi jga par lekar jana h
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    //checking if left is inside bound && largest chota aa gya left wale element se
    if(left < n && arr[largest] < arr[left]){ //incase of 0 base indexing, change left <= n
        largest = left;
    }
    if(right < n && arr[largest] < arr[right]){//incase of 0 base indexing, change right <= n
        largest = right;
    }

    //now check if largest has been updated or not. in case it is updated then it wont be equal to i(line 70)

    if(largest != i){
        swap(arr[largest], arr[i]);
        //checking for futher tree
        heapify(arr,n,largest);
    }
}

void heapSort(int arr[], int n){
    int size = n;

    while(size > 1){
        //step 1 swap
        swap(arr[size], arr[1]);
        size--;

        // 1 is root node
        heapify(arr, size,1);
    }
}

int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.print();

    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;
    for(int i = n/2;i>0;i--){
        heapify(arr,n,i);
    }

    cout << "printing the array " << endl;

    for(int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    } cout << endl;

    heapSort(arr, n);
    for(int i = 1; i <= n; i++){
        cout << arr[i] << " ";
    } cout << endl;

    // for(int i = 1; i <= n; i++){
    //     cout << arr[i] << " ";
    // } cout << endl;
}