#include <iostream>
#include <set>
using namespace std;

int main() {
    string s = "abc";

    set<char> st;
    int left=0, count=0;

    for(int right=0; right<s.length(); right++){
        while(st.count(s[right])){
            st.erase(s[left]);
            left++;
        }

        st.insert(s[right]);
        count += (right-left+1);
    }

    cout << count;
}