#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int sum = 0;

    while(num > 0)
    {
        int digit = num % 10;
        sum += digit;
        num = num / 10;
    }

    cout << sum;

    return 0;
}