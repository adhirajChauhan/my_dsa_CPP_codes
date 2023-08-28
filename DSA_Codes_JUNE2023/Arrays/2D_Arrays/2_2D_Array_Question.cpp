#include <iostream>
#include <climits>
using namespace std;

//Linear Search
int isPresent(int arr[][4],int target, int row, int col){
    for(int row = 0; row <3; row++){
        for(int col = 0; col < 4; col++){
            if(arr[row][col] == target){
                return true;
            }
        }
    }
    return false;
}

//Row sum
void printSum(int arr[][4], int row, int col){
    cout << "Printing Sum -> " ;
    for(int row = 0; row < 3; row++){
        int sum = 0;
        for (int col = 0; col < 4; col++){
            sum += arr[row][col];
        }
        cout << sum << " ";
    }

    cout << endl;
}

//largest sum is present is which row
int rowSum(int arr[][4], int row, int col){
    int maximum = INT_MIN;
    int rowIndex = -1;

    for(int row = 0; row < 3; row++){
        int sum = 0;
        for (int col = 0; col < 4; col++){
            sum += arr[row][col];
        }
        if(sum > maximum){
            maximum = sum;
            rowIndex = row;
        }
    }
    cout << "Maximum sum is : " << maximum << endl;
    return row;

}

//wavePrint
//if the col is even, then we traverse top to bottom, odd then bottom to top
int wavePrint(int arr[][4], int row, int col){
    int ans[100];
    for(int col = 0; col < 4; col++){
        if(col %2==1){
            for (int row = row - 1; row >=0; row--){
                cout << arr[row][col] << " ";
            }
        }
        else{
            for(int row = 0; row < 3; row++){
                cout << arr[row][col] << " ";
            }
        }
    }
}
int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }

    cout << "Element to search " << endl;
    int target;
    cin >> target;

    if(isPresent(arr, target, 3, 4)){
        cout << "Element is present " << endl;
    }
    else {
        cout << "Not present " << endl; 
    }

    printSum(arr,3,4);

    cout << rowSum(arr, 3, 4) << endl;

    int wave = wavePrint(arr,3,4);

}