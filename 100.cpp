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

bool isSameTree(TreeNode *p, TreeNode *q) {
    if (p == NULL || q == NULL) {
        if (p == q) {
            return true;
        } else {
            return false;
        }
    }
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right) && p->val == q->val;
}

int main() {
    return 0;
}
