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

void dfs(TreeNode* root, int &k, int &res) {
    if (!root || k <= 0) {
        return;
    }
    dfs(root->left, k, res);
    k--;
    cout << k << " " << root->val << endl;
    if (k == 0) {
        res = root->val;
        return;
    }
    dfs(root->right, k,res);
}

int kthSmallest(TreeNode* root, int k) {
    int res;
    dfs(root, k, res);
    cout << res << endl;
    return res;
}

int main() {
    TreeNode* root = new TreeNode(2);
    TreeNode* left = new TreeNode(1);
    root->left = left;
    kthSmallest(root, 1);
    return 0;
}
