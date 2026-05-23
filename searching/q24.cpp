#include <bits/stdc++.h>
using namespace std;

bool canEat(vector<int>& piles,
int speed,
int h){

    long long hours=0;

    for(int bananas:piles){

        hours +=
        ceil((double)bananas/speed);
    }

    return hours<=h;
}

int minEatingSpeed(
vector<int>& piles,
int h){

    int left=1;

    int right=
    *max_element(
    piles.begin(),
    piles.end());

    while(left<right){

        int mid=
        left+(right-left)/2;

        if(canEat(
        piles,
        mid,
        h))
            right=mid;

        else
            left=mid+1;
    }

    return left;
}

int main(){

    vector<int> piles=
    {3,6,7,11};

    cout<<minEatingSpeed(
    piles,
    8
    );
}