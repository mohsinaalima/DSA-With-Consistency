#include <bits/stdc++.h>
using namespace std;

// Binary Search
int binarySearch(vector<int>& arr, int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;   // safe mid

        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

// Exponential Search
int exponentialSearch(vector<int>& arr, int x) {
    int n = arr.size();

    if (n == 0) return -1;
    if (arr[0] == x) return 0;

    int i = 1;

    // Find range
    while (i < n && arr[i] <= x)
        i *= 2;

    // Apply Binary Search in found range
    return binarySearch(arr, i / 2, min(i, n - 1), x);
}

int main() {
    vector<int> arr = {2, 3, 4, 10, 40, 50, 70};
    int x = 10;

    int result = exponentialSearch(arr, x);

    if (result == -1)
        cout << "Element not found";
    else
        cout << "Element found at index: " << result;

    return 0;
}
