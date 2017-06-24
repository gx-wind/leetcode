#include <iostream>
#include <queue>

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

int findBottomLeftValue(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()) {
        root = q.front();
        q.pop();
        if (root->right) {
            q.push(root->right);
        }
        if (root->left) {
            q.push(root->left);
        }
    }
    return root->val;
}

int main() {
    return 0;
}
