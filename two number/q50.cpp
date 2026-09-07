#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minimum = INT_MAX;
    int profit = 0;

    for (int price : prices) {
        minimum = min(minimum, price);
        profit = max(profit, price - minimum);
    }

    return profit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << maxProfit(prices);

    return 0;
}