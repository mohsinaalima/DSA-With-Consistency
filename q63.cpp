#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 5, 30, 25};

    sort(v.begin(), v.end());

    auto it = v.end() - 2;

    cout << "Second Largest = " << *it;
}