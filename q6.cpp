//Write a program in C++ to find a prime number within a range.
#include <iostream>
using namespace std;

int main()
{
    int start, end, i, j;
    int count = 0;
    bool isPrime;

    cout << "Input number for starting range: ";
    cin >> start;

    cout << "Input number for ending range: ";
    cin >> end;

    cout << "The prime numbers between " << start << " and " << end << " are:" << endl;

    for (i = start; i <= end; i++)
    {
        if (i <= 1)
            continue;

        isPrime = true;

        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            cout << i << " ";
            count++;
        }
    }

    cout << endl;
    cout << "The total number of prime numbers between "
         << start << " to " << end << " is: " << count;

    return 0;
}
