#include <bits/stdc++.h>
using namespace std;

class MedianFinder {

private:
    // Smaller half
    priority_queue<int> leftMaxHeap;

    // Larger half
    priority_queue<int, vector<int>, greater<int>> rightMinHeap;

public:

    MedianFinder() {
    }

    void addNum(int num) {

        // Put number into left heap
        if (leftMaxHeap.empty() || num <= leftMaxHeap.top()) {
            leftMaxHeap.push(num);
        } else {
            rightMinHeap.push(num);
        }

        // Balance the heaps
        if (leftMaxHeap.size() > rightMinHeap.size() + 1) {
            rightMinHeap.push(leftMaxHeap.top());
            leftMaxHeap.pop();
        }

        if (rightMinHeap.size() > leftMaxHeap.size()) {
            leftMaxHeap.push(rightMinHeap.top());
            rightMinHeap.pop();
        }
    }

    double findMedian() {

        if (leftMaxHeap.size() > rightMinHeap.size()) {
            return leftMaxHeap.top();
        }

        return (leftMaxHeap.top() + rightMinHeap.top()) / 2.0;
    }
};