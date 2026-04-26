#include <bits/stdc++.h>
using namespace std;

// First Occurrence
int firstOcc(vector<int>& arr, int x) {
    int l = 0, r = arr.size() - 1, ans = -1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x) {
            ans = mid;
            r = mid - 1;   // left side search
        } 
        else if (arr[mid] < x) {
            l = mid + 1;
        } 
        else {
            r = mid - 1;
        }
    }
    return ans;
}

// Last Occurrence
int lastOcc(vector<int>& arr, int x) {
    int l = 0, r = arr.size() - 1, ans = -1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x) {
            ans = mid;
            l = mid + 1;   // right side search
        } 
        else if (arr[mid] < x) {
            l = mid + 1;
        } 
        else {
            r = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5};
    int x = 2;

    int first = firstOcc(arr, x);
    int last = lastOcc(arr, x);

    cout << "First Occurrence: " << first << endl;
    cout << "Last Occurrence: " << last << endl;

    return 0;
}