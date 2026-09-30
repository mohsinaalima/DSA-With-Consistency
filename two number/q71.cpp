#include <bits/stdc++.h>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) {
    int n = temperatures.size();

    vector<int> ans(n, 0);

    stack<int> st;

    for (int i = 0; i < n; i++) {

        while (!st.empty() &&
               temperatures[i] > temperatures[st.top()]) {

            int previous = st.top();
            st.pop();

            ans[previous] = i - previous;
        }

        st.push(i);
    }

    return ans;
}

int main() {
    vector<int> temperatures = {
        73, 74, 75, 71, 69, 72, 76, 73
    };

    vector<int> ans = dailyTemperatures(temperatures);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}