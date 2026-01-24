// Write a program in C++ to check whether a number is prime or not.
#include <iostream>
using namespace std;

int main()
{
    int num1, ctr = 0;

    cout << "Input a number to check prime or not: ";
    cin >> num1;

    for (int a = 1; a <= num1; a++)
    {
        if (num1 % a == 0)
        {
            ctr++;
        }
    }

    if (ctr == 2)
    {
        cout << "The entered number is a prime number.";
    }
    else
    {
        cout << "The entered number is not a prime number.";
    }

    return 0;
}
