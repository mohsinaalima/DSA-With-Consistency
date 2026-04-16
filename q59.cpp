#include <iostream>
#include <set>
using namespace std;

int main() {
    string s = "abcabcbb";

    set<char> st;
    int left = 0, maxLen = 0;

    for(int right = 0; right < s.length(); right++) {

        while(st.count(s[right])) {
            st.erase(s[left]);
            left++;
        }

        st.insert(s[right]);
        maxLen = max(maxLen, right - left + 1);
    }

    cout << "Length = " << maxLen;
}