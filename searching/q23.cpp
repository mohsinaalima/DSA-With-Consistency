#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {

    vector<vector<int>> ans;

    sort(intervals.begin(), intervals.end());

    for(auto interval : intervals){

        if(ans.empty() || ans.back()[1] < interval[0]){
            ans.push_back(interval);
        }
        else{
            ans.back()[1] =
            max(ans.back()[1], interval[1]);
        }
    }

    return ans;
}

int main(){

    vector<vector<int>> intervals={
        {1,3},{2,6},{8,10},{15,18}
    };

    vector<vector<int>> ans=
    merge(intervals);

    for(auto row:ans){
        cout<<"[";
        for(int x:row)
            cout<<x<<" ";
        cout<<"]";
    }
}