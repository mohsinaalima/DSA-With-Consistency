
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) {
            return 0;
        }

        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> dp(n + 1, 0);
        int maxSide = 0;

        for (int i = 1; i <= m; i++) {
            int diagonal = 0;

            for (int j = 1; j <= n; j++) {
                int above = dp[j];

                if (matrix[i - 1][j - 1] == '1') {
                    dp[j] = 1 + min({
                        dp[j],       // Above
                        dp[j - 1],   // Left
                        diagonal     // Top-left diagonal
                    });

                    maxSide = max(maxSide, dp[j]);
                } else {
                    dp[j] = 0;
                }

                diagonal = above;
            }
        }

        return maxSide * maxSide;
    }
};
