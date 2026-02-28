#include<iostream>
#include <utility>
using namespace std;

int main(){
    pair<int, string> p;

    p.first = 1;
    p.second = "Apple";

    cout << "key: " <<p.first << endl;
    cout << "value: " <<p.second << endl;

    return 0;
}
