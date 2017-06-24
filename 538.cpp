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

int sum = 0;

TreeNode* convertBST(TreeNode* root) {
    if (!root) {
        return NULL;
    }
    convertBST(root->right);
    int sum = root->val + sum;
    root->val = sum;
    convertBST(root->left);
    return root;
}

int main() {
    return 0;
}
