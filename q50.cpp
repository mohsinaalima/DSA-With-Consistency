#include <iostream>
using namespace std;

int main() {
    int arr[] = {16,17,4,3,5,2};
    int n = 6;

    int maxRight = arr[n-1];
    cout << maxRight << " ";

    for(int i=n-2;i>=0;i--){
        if(arr[i] > maxRight){
            cout << arr[i] << " ";
            maxRight = arr[i];
        }
    }
}