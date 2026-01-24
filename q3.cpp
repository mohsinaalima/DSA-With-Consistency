//Write a program in C++ to display n terms of natural numbers and their sum.
#include <iostream>
using namespace std;

int main()
{
    int n, i, sum =0;
     cin>>n;
    for (i=1; i<=n; i++)
    {
        cout <<i<< "";
        sum= sum + i;

    }
    cout <<endl;
    

    cout<<sum;



}