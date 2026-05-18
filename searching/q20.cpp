#include <bits/stdc++.h>
using namespace std;

int maxSubArrayLen(vector<int>& nums, int k) {

    unordered_map<int,int> mp;

    int sum = 0;
    int maxLen = 0;

    for(int i=0;i<nums.size();i++) {

        sum += nums[i];

        if(sum==k)
            maxLen=i+1;

        if(mp.find(sum-k)!=mp.end()) {
            maxLen=max(
                maxLen,
                i-mp[sum-k]
            );
        }

        if(mp.find(sum)==mp.end()) {
            mp[sum]=i;
        }
    }

    return maxLen;
}

int main() {

    vector<int> nums={1,-1,5,-2,7};
    int k=3;

    cout<<maxSubArrayLen(nums,k);
}