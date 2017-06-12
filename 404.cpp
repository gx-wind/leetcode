#include <iostream>

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

int sumLeftLeaves(TreeNode* root, bool isLeft) {
    if (!root) {
        return 0;
    }
    if (!root->left && !root->right) {
        if (isLeft) {
            return root->val;
        } else {
            return 0;
        }
    }
    return sumLeftLeaves(root->left, 1)+sumLeftLeaves(root->right, 0);
}

int sumOfLeftLeaves(TreeNode* root) {
    return sumLeftLeaves(root, 0);
}

int main() {
    return 0;
}
