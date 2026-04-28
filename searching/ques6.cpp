#include <bits/stdc++.h>
using namespace std;

// Merge function to combine two sorted halves
void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp;
    int i = left;     // starting index of left half
    int j = mid + 1;  // starting index of right half

    // Merge the two halves into temp[]
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Copy remaining elements of left half (if any)
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    // Copy remaining elements of right half (if any)
    while (j <= right) {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy temp[] back to original array
    for (int k = left; k <= right; k++) {
        arr[k] = temp[k - left];
    }
}

// Recursive merge sort function
void mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);       // left half
    mergeSort(arr, mid + 1, right);  // right half

    merge(arr, left, mid, right);    // merge both halves
}

int main() {
    vector<int> arr = {5, 2, 9, 1, 3, 6};

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}