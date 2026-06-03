#include <iostream>
using namespace std;


int findSum(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}


float findAverage(int sum, int n)
{
    return (float)sum / n;
}

int main()
{
    const int N = 5;
    int arr[N];

    cout << "Enter 5 numbers: ";

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int sum = findSum(arr, N);
    float avg = findAverage(sum, N);

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;

    return 0;
}