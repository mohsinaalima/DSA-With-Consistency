#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter value of n: ";
    cin >> n;

    // Using loop
    for(int i = 1; i <= n; i++) {
        sum = sum + (2*i - 1);
    }

    cout << "Sum of first " << n << " odd natural numbers = " << sum << endl;

    return 0;
}