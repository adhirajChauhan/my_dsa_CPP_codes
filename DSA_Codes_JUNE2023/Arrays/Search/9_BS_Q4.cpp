#include <iostream>
using namespace std;

int root(int arr[], int size, int key){
    int s = 0, e = size - 1;
    int mid = (s+ e)/2;

    int ans = -1;
    while(s <= e){
        int square = mid * mid;

        if(square == key){
            return mid;
        }
        if(square < key){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = (s+e)/2;
    }
    return ans;
}

int main(){
    
}
//find the square root of number using BS
//if we are searcing for the root of 27 then the search space will lie between 0 to 27