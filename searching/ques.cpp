#include <bits/stdc++.h>
using namespace std;

int findPairs(vector<int>& nums, int k) {
    unordered_set<int> s(nums.begin(), nums.end());
    int count = 0;

    for (auto x : s) {
        if (s.count(x + k)) count++;
    }
    return count;
}