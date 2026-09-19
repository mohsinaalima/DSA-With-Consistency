#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    vector<int> ans;

    int n = nums.size();
    int maximum = nums[n - 1];

    ans.push_back(maximum);

    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] > maximum) {
            ans.push_back(nums[i]);
            maximum = nums[i];
        }
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main() {
    vector<int> nums = {10, 22, 12, 3, 0, 6};

    vector<int> ans = leaders(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}