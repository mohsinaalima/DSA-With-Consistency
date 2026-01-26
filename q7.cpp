//Write a program in C++ to find the factorial of a number.
#include <iostream>
using namespace std;

int main()
{
    int num;
    long long fact = 1;

    cout << "Input a number to find the factorial: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    cout << "The factorial of the given number is: " << fact;

    return 0;
}
