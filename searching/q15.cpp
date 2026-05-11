#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {

    vector<vector<int>> result;

    sort(nums.begin(), nums.end());

    int n = nums.size();

    for (int i = 0; i < n; i++) {

        // Duplicate avoid
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        for (int j = i + 1; j < n; j++) {

            // Duplicate avoid
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;

            int left = j + 1;
            int right = n - 1;

            while (left < right) {

                long long sum =
                    (long long)nums[i] +
                    nums[j] +
                    nums[left] +
                    nums[right];

                if (sum < target) {
                    left++;
                }

                else if (sum > target) {
                    right--;
                }

                else {

                    result.push_back({
                        nums[i],
                        nums[j],
                        nums[left],
                        nums[right]
                    });

                    // Duplicate skip
                    while (left < right &&
                           nums[left] == nums[left + 1])
                        left++;

                    while (left < right &&
                           nums[right] == nums[right - 1])
                        right--;

                    left++;
                    right--;
                }
            }
        }
    }

    return result;
}

int main() {

    vector<int> nums = {1,0,-1,0,-2,2};
    int target = 0;

    vector<vector<int>> ans = fourSum(nums, target);

    for (auto v : ans) {

        for (int x : v)
            cout << x << " ";

        cout << endl;
    }
}