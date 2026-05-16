#include <bits/stdc++.h>
using namespace std;

string removeKdigits(string num, int k) {

    string st;

    for (char digit : num) {

        while (!st.empty() &&
               k > 0 &&
               st.back() > digit) {

            st.pop_back();
            k--;
        }

        st.push_back(digit);
    }

    // Remaining remove
    while (k > 0) {
        st.pop_back();
        k--;
    }

    // Leading zeros remove
    int i = 0;

    while (i < st.size() && st[i] == '0')
        i++;

    string ans = st.substr(i);

    return ans.empty() ? "0" : ans;
}

int main() {

    string num = "1432219";
    int k = 3;

    cout << removeKdigits(num, k);
}