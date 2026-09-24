#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();

    // Step 1: Find the first decreasing element
    int i = n - 2;

    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }

    // Step 2: Find the element just greater than nums[i]
    if (i >= 0) {
        int j = n - 1;

        while (nums[j] <= nums[i]) {
            j--;
        }

        swap(nums[i], nums[j]);
    }

    // Step 3: Reverse the remaining part
    reverse(nums.begin() + i + 1, nums.end());
}

int main() {
    vector<int> nums = {1, 2, 3};

    nextPermutation(nums);

    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}