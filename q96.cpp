#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxCoins(vector<int>& nums) {

        int n = nums.size();

        vector<int> a;

        a.push_back(1);

        for (int x : nums) {
            a.push_back(x);
        }

        a.push_back(1);

        vector<vector<int>> dp(
            n + 2,
            vector<int>(n + 2, 0)
        );

        for (int length = 1;
             length <= n;
             length++) {

            for (int left = 1;
                 left + length - 1 <= n;
                 left++) {

                int right = left + length - 1;

                for (int last = left;
                     last <= right;
                     last++) {

                    int coins =
                        a[left - 1] *
                        a[last] *
                        a[right + 1];

                    coins += dp[left][last - 1];
                    coins += dp[last + 1][right];

                    dp[left][right] =
                        max(dp[left][right], coins);
                }
            }
        }

        return dp[1][n];
    }
};