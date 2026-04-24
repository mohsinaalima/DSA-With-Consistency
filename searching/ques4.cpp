#include <bits/stdc++.h>
using namespace std;

// Binary Search
int binarySearch(vector<int>& arr, int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x) return mid;
        else if (arr[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

// Unbounded Search (Safe Version)
int searchUnbounded(vector<int>& arr, int x) {
    int n = arr.size();

    if (n == 0) return -1;
    if (arr[0] == x) return 0;

    int i = 1;

    // Find range safely
    while (i < n && arr[i] < x)
        i *= 2;

    int left = i / 2;
    int right = min(i, n - 1);

    return binarySearch(arr, left, right, x);
}

int main() {
    vector<int> arr = {2, 3, 4, 10, 40, 50, 70};
    int x = 10;

    int index = searchUnbounded(arr, x);

    if (index != -1)
        cout << "Found at index: " << index;
    else
        cout << "Not found";

    return 0;
}