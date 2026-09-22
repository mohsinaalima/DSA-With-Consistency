#include <bits/stdc++.h>
using namespace std;

vector<int> rearrange(vector<int>& nums) {
    int n = nums.size();

    vector<int> ans(n);

    int positive = 0;
    int negative = 1;

    for (int x : nums) {
        if (x > 0) {
            ans[positive] = x;
            positive += 2;
        }
        else {
            ans[negative] = x;
            negative += 2;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {3, 1, -2, -5, 2, -4};

    vector<int> ans = rearrange(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}