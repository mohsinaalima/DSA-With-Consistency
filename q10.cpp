//Write a program in C++ to find the sum of the digits of a given number.

#include <iostream>
using namespace std;

int main()
{
    int num, digit, sum = 0;

    cout << " input a number";
    cin >> num;

    int temp = num; 

    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }

    cout << " the sum of digit " <<sum << "is: " << sum;

    return 0;

}