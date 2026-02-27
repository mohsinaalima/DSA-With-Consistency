#include<iostream>
using namespace std;

int main() {

    int arr[2][3];
    int rowSize = 2;
    int colSize = 3;

    // Taking input row-wise
    for(int r = 0; r < rowSize; r++) {
        for(int c = 0; c < colSize; c++) {
            cout << "Enter the value for (" << r << ", " << c << ") : ";
            cin >> arr[r][c];
        }
    }

    // Printing the array
    cout << "\nMatrix is:\n";

    for(int r = 0; r < rowSize; r++) {
        for(int c = 0; c < colSize; c++) {
            cout << arr[r][c] << " ";
        }
        cout << endl;
    }

    return 0;
}