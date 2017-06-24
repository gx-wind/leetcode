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

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    while ((root->val-p->val)*(root->val-q->val) > 0) {
        if (root->val < p->val) {
            root = root->right;
        } else {
            root = root->left;
        }
    }
    return root;
}

int main() {
    return 0;
}
