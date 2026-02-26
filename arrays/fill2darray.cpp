#include <iostream>
using namespace std;

int main() {

    int arr[3][3];

    // Fill with value 5
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr[i][j] = 5;
        }
    }

    // Print array
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}