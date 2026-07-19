#include <iostream>
#include <vector>
using namespace std;

int findFirst(vector<int>& nums, int target) {

    int left = 0;
    int right = nums.size() - 1;
    int answer = -1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            answer = mid;
            right = mid - 1;
        }
        else if (nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return answer;
}

int findLast(vector<int>& nums, int target) {

    int left = 0;
    int right = nums.size() - 1;
    int answer = -1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            answer = mid;
            left = mid + 1;
        }
        else if (nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return answer;
}

int main() {

    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;

    cout << findFirst(nums, target)
         << " "
         << findLast(nums, target);

    return 0;
}