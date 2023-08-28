#include <iostream>
using namespace std;
#include <climits>

int getMin(int num[], int size){
    //int have min value 2 power -31 and max value 2 power 31 -1
    int min = INT_MAX;
    for(int i = 0; i < size; i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    return min;
}

int getMax(int num[], int size){
    //int have min value 2 power -31 and max value 2 power 31 -1
    int max = INT_MIN;
    for(int i = 0; i < size; i++){
        if(num[i] > max){
            max = num[i];
        }
    }
    return max;
}

int main(){

    //lets take iput for the size of array
    int size;
    cin >> size;

    //for now we will not pass the size here, that we will see later in pointers
    int num[100];

    //taking input of values in array
    for(int i = 0; i < size; i++){
        cin >> num[i];
    }

    cout << "Max is : " << getMax(num,size) << endl;
    cout << "Min is : " << getMin(num,size) << endl;

}