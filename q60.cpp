#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s = "cbaebabacd", p = "abc";

    vector<int> freq(26,0);

    for(char c : p) freq[c-'a']++;

    int left=0, count=p.length();

    for(int right=0; right<s.length(); right++){
        if(freq[s[right]-'a']-- > 0)
            count--;

        if(count == 0)
            cout << left << " ";

        if(right-left+1 == p.length()){
            if(freq[s[left]-'a']++ >= 0)
                count++;
            left++;
        }
    }
}