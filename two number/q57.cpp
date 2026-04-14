#include <iostream>
using namespace std;

int main() {
    int arr[] = {3,10,5,25,2,8};
    int n = 6, maxXor = 0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            maxXor = max(maxXor, arr[i]^arr[j]);
        }
    }

    cout << maxXor;
}