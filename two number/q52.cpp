#include <bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(vector<int>& nums) {
    int count = 0;
    int maximum = 0;

    for (int x : nums) {
        if (x == 1) {
            count++;
            maximum = max(maximum, count);
        }
        else {
            count = 0;
        }
    }

    return maximum;
}

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};

    cout << maxConsecutiveOnes(nums);

    return 0;
}