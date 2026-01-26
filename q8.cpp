// Write a program in C++ to find the last prime number that occurs before the entered number.

#include <iostream>
using namespace std;

int main()
{
    int num, i, j;
    bool isPrime;

    cout << "Input a number to fing the last prime number occurs before the number:";
    cin >> num;

    for (i = num -1; i >=2; i--)
    {
        isPrime = true;


        for (j = 2; j * j <= i; j++)
        {
            if  (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            cout << i << "is the last prime number before " << num;
            break;
        }
    }
    return 0;
}