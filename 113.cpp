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

void depSearch(TreeNode *root, int sum, vector<vector<int> >& res, vector<int>& v) {
    if (!root) {
        return;
    }
    if (root->left) {
        v.push_back(root->val);
        depSearch(root->left, sum-root->val, res, v);
        v.pop_back();
    }
    if (root->right) {
        v.push_back(root->val);
        depSearch(root->right, sum-root->val, res, v);
        v.pop_back();
    }
    if ((!root->right) && (!root->left)) {
        if (sum == root->val) {
            v.push_back(root->val);
            res.push_back(v);
        }
    }
}

vector<vector<int> > pathSum(TreeNode *root, int sum) {
    vector<vector<int> > res;
    vector<int> v;
    if (!root) {
        return res;
    }
    depSearch(root, sum, res, v);
    return res;
}

int main() {
    return 0;
}
