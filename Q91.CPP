#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        if (n == 0) {
            return 0;
        }

        // States:
        // hold = maximum profit while holding a stock
        // sold = maximum profit after selling today
        // rest = maximum profit while resting

        int hold = -prices[0];
        int sold = 0;
        int rest = 0;

        for (int i = 1; i < n; i++) {
            int prevHold = hold;
            int prevSold = sold;
            int prevRest = rest;

            // Either continue holding,
            // or buy today after a rest day.
            hold = max(prevHold, prevRest - prices[i]);

            // Sell the stock today.
            sold = prevHold + prices[i];

            // Either continue resting,
            // or enter rest after selling yesterday.
            rest = max(prevRest, prevSold);
        }

        return max(sold, rest);
    }
};