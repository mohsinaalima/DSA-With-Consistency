#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int>& nums) {
    int largest = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }

    return largest;
}

int main() {
    vector<int> nums = {10, 5, 20, 8, 15};

    cout << largestElement(nums);

    return 0;
}