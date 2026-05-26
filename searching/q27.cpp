#include <bits/stdc++.h>
using namespace std;

class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x){
        val=x;
        left=right=NULL;
    }
};

int maxDepth(TreeNode* root){

    if(root==NULL)
        return 0;

    return 1+
           max(
             maxDepth(root->left),
             maxDepth(root->right)
           );
}