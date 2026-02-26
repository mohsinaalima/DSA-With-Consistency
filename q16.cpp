//Checkerboard Pattern with "black" and "white"
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of checkerboard: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if((i + j) % 2 == 0)
                cout << "black ";
            else
                cout << "white ";
        }
        cout << endl;
    }

    return 0;
}