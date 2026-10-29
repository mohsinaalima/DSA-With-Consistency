#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> answer;

    void backtrack(vector<int>& nums, int index) {

        if (index == nums.size()) {
            answer.push_back(nums);
            return;
        }

        for (int i = index; i < nums.size(); i++) {

            // Choose
            swap(nums[index], nums[i]);

            // Explore
            backtrack(nums, index + 1);

            // Undo
            swap(nums[index], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        backtrack(nums, 0);
        return answer;
    }
};