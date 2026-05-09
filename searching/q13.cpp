
// LeetCode 1021

#include <iostream>
using namespace std;

string removeOuterParentheses(string s) {
    string ans = "";
    int balance = 0;

    for (char ch : s) {

        // If opening bracket and not outermost
        if (ch == '(') {
            if (balance > 0) {
                ans += ch;
            }
            balance++;
        }

        // Closing bracket
        else {
            balance--;

            // If not outermost
            if (balance > 0) {
                ans += ch;
            }
        }
    }

    return ans;
}

int main() {
    string s = "(()())(())";

    cout << removeOuterParentheses(s);

    return 0;
}