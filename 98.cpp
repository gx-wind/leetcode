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

bool validateBST(TreeNode* root, TreeNode* &pre) {
    if (!root) {
        return true;
    }
    if (!validateBST(root->left, pre)) {
        return false;
    }
    if (pre != NULL && pre->val >= root->val) {
        return false;
    }
    pre = root;
    return validateBST(root->right, pre);
}

bool isValidBST(TreeNode* root) {
    TreeNode* pre = NULL;
    return validateBST(root, pre);
}

int main() {
    return 0;
}
