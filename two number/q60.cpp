#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> ans;

    if (intervals.empty()) {
        return ans;
    }

    // Sort by starting time
    sort(intervals.begin(), intervals.end());

    ans.push_back(intervals[0]);

    for (int i = 1; i < intervals.size(); i++) {

        // Overlap
        if (intervals[i][0] <= ans.back()[1]) {
            ans.back()[1] = max(
                ans.back()[1],
                intervals[i][1]
            );
        }
        else {
            // No overlap
            ans.push_back(intervals[i]);
        }
    }

    return ans;
}

int main() {
    vector<vector<int>> intervals = {
        {1, 3},
        {2, 6},
        {8, 10},
        {15, 18}
    };

    vector<vector<int>> ans = merge(intervals);

    for (auto& interval : ans) {
        cout << "[" << interval[0]
             << "," << interval[1]
             << "] ";
    }

    return 0;
}