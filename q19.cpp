#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {

    int n = nums.size();

    vector<int> answer(n, 1);

    int prefix = 1;

    // Store prefix products
    for (int i = 0; i < n; i++) {

        answer[i] = prefix;

        prefix *= nums[i];
    }

    int suffix = 1;

    // Multiply suffix products
    for (int i = n - 1; i >= 0; i--) {

        answer[i] *= suffix;

        suffix *= nums[i];
    }

    return answer;
}

int main() {

    vector<int> nums = {1,2,3,4};

    vector<int> ans = productExceptSelf(nums);

    for (int x : ans)
        cout << x << " ";

    return 0;
}