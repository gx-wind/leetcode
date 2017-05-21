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

int maxDepth(TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    return max(maxDepth(root->left) + 1, maxDepth(root->right) +1);
}

int main() {
    return 0;
}
