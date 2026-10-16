#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:

    // {rob this node, don't rob this node}
    pair<int, int> solve(TreeNode* root) {

        if (root == nullptr) {
            return {0, 0};
        }

        auto left = solve(root->left);
        auto right = solve(root->right);

        // If we rob current node,
        // we cannot rob its children.
        int robCurrent =
            root->val + left.second + right.second;

        // If we don't rob current node,
        // children can either be robbed or skipped.
        int skipCurrent =
            max(left.first, left.second) +
            max(right.first, right.second);

        return {robCurrent, skipCurrent};
    }

    int rob(TreeNode* root) {

        auto result = solve(root);

        return max(result.first, result.second);
    }
};