#include <iostream>
using namespace std;

int main() {
    int arr[] = {4,3,6,2,1,1};
    int n = 6;

    int sum = 0, sqSum = 0;

    for(int i=0;i<n;i++){
        sum += arr[i];
        sqSum += arr[i]*arr[i];
    }

    int S = n*(n+1)/2;
    int P = n*(n+1)*(2*n+1)/6;

    int diff = sum - S;              // x - y
    int sqDiff = sqSum - P;          // x² - y²

    int sumXY = sqDiff / diff;       // x + y

    int x = (diff + sumXY)/2;        // repeating
    int y = sumXY - x;               // missing

    cout << "Repeating = " << x << endl;
    cout << "Missing = " << y;
}