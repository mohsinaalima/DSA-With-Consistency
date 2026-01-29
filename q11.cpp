// Write a program in C++ to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    double sum = 0.0, term;

    cout << "Input the value for nth term: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        term = 1.0 / pow(i, i);
        cout << "1/" << i << "^" << i << " = " << term << endl;
        sum = sum + term;
    }

    cout << "The sum of the above series is: " << sum;

    return 0;
}
