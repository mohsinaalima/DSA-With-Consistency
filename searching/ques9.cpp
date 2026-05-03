#include <bits/stdc++.h>
using namespace std;

int characterReplacement(string s, int k) {
    unordered_map<char, int> mp;
    int left = 0, maxFreq = 0, maxLength = 0;

    for (int right = 0; right < s.size(); right++) {
        mp[s[right]]++;
        maxFreq = max(maxFreq, mp[s[right]]);

        // Agar invalid ho gaya
        while ((right - left + 1) - maxFreq > k) {
            mp[s[left]]--;
            left++;
        }

        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main() {
    string s = "AABABBA";
    int k = 1;
    cout << characterReplacement(s, k);
}