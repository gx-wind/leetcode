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

int depth(TreeNode* root) {
    if (!root) {
        return 0;
    }
    return max(depth(root->left), depth(root->right))+1;
}

bool isBalanced(TreeNode* root) {
    if (!root)
        return true;
    int leftDepth = depth(root->left);
    int rightDepth = depth(root->right);
    return isBalanced(root->left) && isBalanced(root->right) && abs(leftDepth-rightDepth) <= 1;
}

int main() {
    return 0;
}
