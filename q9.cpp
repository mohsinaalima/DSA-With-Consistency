//Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.

#include <iostream>
using namespace std;

int main()
{
    int a, b, gcd;

    cout << "Input the first number:";
    cin >> a;

    cout << "Input the Second number: ";
    cin >> b;

    while (b != 0)
    {
        int rem = a%b;
        a = b;
        b = rem;
    }

    gcd = a;


    cout << " The Greatest common is: " << gcd;

    return 0;
}