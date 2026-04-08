#include <iostream>
using namespace std;

string longestPalindrome(string s) {
    int start = 0, maxLen = 1;

    for(int i=0;i<s.length();i++){
        // odd length
        int l=i, r=i;
        while(l>=0 && r<s.length() && s[l]==s[r]){
            if(r-l+1 > maxLen){
                start = l;
                maxLen = r-l+1;
            }
            l--; r++;
        }

        // even length
        l=i, r=i+1;
        while(l>=0 && r<s.length() && s[l]==s[r]){
            if(r-l+1 > maxLen){
                start = l;
                maxLen = r-l+1;
            }
            l--; r++;
        }
    }

    return s.substr(start, maxLen);
}

int main() {
    string s = "babad";
    cout << longestPalindrome(s);
}