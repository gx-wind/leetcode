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

int minDepth(TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    if (root->left == NULL) {
        return 1+minDepth(root->right);
    }
    if (root->right == NULL) {
        return 1+minDepth(root->left);
    }
    return min(minDepth(root->left) + 1, minDepth(root->right) +1);
}

int main() {
    return 0;
}

