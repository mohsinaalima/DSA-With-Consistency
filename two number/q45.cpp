#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>& nums) {
    int largest = INT_MIN;
    int second = INT_MIN;

    for (int x : nums) {
        if (x > largest) {
            second = largest;
            largest = x;
        }
        else if (x > second && x != largest) {
            second = x;
        }
    }

    return second;
}

int main() {
    vector<int> nums = {10, 5, 20, 8, 15};

    cout << secondLargest(nums);

    return 0;
}