#include <iostream>
using namespace std;

//not complete, check video
class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;

    public:
    CircularQueue(int n){
        size = 100001;
        arr = new int[size];
        front = rear = -1;
    }
        bool enqueue(int value)
        {
            if((front == 0 && rear == size -1) || (rear == (front -1)%(size-1))){
                cout << "Queue is full";
                return false;
            }
        }
    
};

int main(){

}