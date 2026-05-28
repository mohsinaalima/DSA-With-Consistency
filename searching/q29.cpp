#include <bits/stdc++.h>
using namespace std;

void dfs(
vector<int>& candidates,
int target,
vector<int>& curr,
vector<vector<int>>& ans,
int index){

    if(target==0){
        ans.push_back(curr);
        return;
    }

    if(target<0)
        return;

    for(int i=index;
        i<candidates.size();
        i++){

        curr.push_back(
        candidates[i]
        );

        dfs(
        candidates,
        target-candidates[i],
        curr,
        ans,
        i
        );

        curr.pop_back();
    }
}

vector<vector<int>>
combinationSum(
vector<int>& candidates,
int target){

    vector<vector<int>> ans;
    vector<int> curr;

    dfs(
    candidates,
    target,
    curr,
    ans,
    0
    );

    return ans;
}