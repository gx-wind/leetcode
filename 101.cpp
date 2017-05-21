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

bool isSymme(TreeNode *p, TreeNode *q) {
    if (p == NULL || q == NULL) {
        if (p == q) {
            return true;
        } else {
            return false;
        }
    }
    return p->val == q->val && isSymme(p->left, q->right) && isSymme(p->right, q->left);
}

bool isSymmetric(TreeNode *root) {
    if (root == NULL) {
        return true;
    }
    return isSymme(root->left, root->right);
}

int main() {
    return 0;
}
