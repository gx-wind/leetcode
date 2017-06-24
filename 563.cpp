#include <iostream>
#include <algorithm>

using namespace std;

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int sum = 0;

int dfs(TreeNode* root) {
    if (!root)
        return 0;
    int left = dfs(root->left);
    int right = dfs(root->right);
    sum += abs(right-left);
    return left+right+root->val;
}

int findTilt(TreeNode* root) {
    dfs(root);
    return sum;
}

int main() {
    return 0;
}
