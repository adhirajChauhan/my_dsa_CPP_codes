#include <iostream>
using namespace std;

bool searchElement(int arr[][3], int row, int col, int target) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int row = 3;
    int col = 3;
    int target = 5;

    bool found = searchElement(arr, row, col, target);
    if (found) {
        cout << "Element " << target << " found in the array." << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}
