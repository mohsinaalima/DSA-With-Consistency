#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int longestConsecutive(vector<int>& nums) {

    unordered_set<int> st(nums.begin(), nums.end());

    int longest = 0;

    for (int num : st) {

        if (!st.count(num - 1)) {

            int current = num;
            int length = 1;

            while (st.count(current + 1)) {
                current++;
                length++;
            }

            longest = max(longest, length);
        }
    }

    return longest;
}

int main() {

    vector<int> nums = {100,4,200,1,3,2};

    cout << longestConsecutive(nums);

    return 0;
}