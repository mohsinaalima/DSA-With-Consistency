#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstringKDistinct(string s, int k) {
    unordered_map<char, int> mp;
    int left = 0, maxLength = 0;

    for (int right = 0; right < s.length(); right++) {
        mp[s[right]]++;

        // Agar distinct characters k se zyada ho gaye
        while (mp.size() > k) {
            mp[s[left]]--;
            if (mp[s[left]] == 0) {
                mp.erase(s[left]);
            }
            left++;
        }

        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main() {
    string s;
    int k;
    cin >> s >> k;

    cout << lengthOfLongestSubstringKDistinct(s, k) << endl;
    return 0;
}