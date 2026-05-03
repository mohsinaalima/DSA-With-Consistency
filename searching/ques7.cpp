#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_set<char> st;
    int left = 0, right = 0;
    int maxLength = 0;

    while (right < s.length()) {
        // Agar character already set me hai → remove from left
        while (st.find(s[right]) != st.end()) {
            st.erase(s[left]);
            left++;
        }

        // Add current character
        st.insert(s[right]);

        // Update max length
        maxLength = max(maxLength, right - left + 1);

        right++;
    }

    return maxLength;
}

int main() {
    string s;
    cin >> s;

    cout << lengthOfLongestSubstring(s) << endl;
    return 0;
}