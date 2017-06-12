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

void depSearch(TreeNode* root) {
    if (!root) {
        return;
    }
    TreeNode *tmp = root->left;
    root->left = root->right;
    root->right = tmp;
    depSearch(root->left);
    depSearch(root->right);
}

TreeNode* invertTree(TreeNode* root) {
    depSearch(root);
    return root;
}

int main() {
    return 0;
}
