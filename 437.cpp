#include <iostream>
#include <vector>

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

int depSearch(TreeNode* root, int pre, int& sum) {
    if (!root) {
        return 0;
    }
    int current = pre + root->val;
    return (current == sum) + depSearch(root->left, current, sum) + depSearch(root->right, current, sum);
}

int pathSum(TreeNode* root, int sum) {
    if (!root) {
        return 0;
    }
    int pre = 0;
    return depSearch(root, pre, sum) + pathSum(root->left,sum) + pathSum(root->right, sum);
}

int main() {
    return 0;
}
