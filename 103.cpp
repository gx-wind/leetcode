#include <iostream>
#include <queue>
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

vector<vector<int> > zigzagLevelOrder(TreeNode* root) {
    vector<vector<int> > vv;
    queue<TreeNode*> q;
    if (!root) {
        return vv;
    }
    q.push(root);
    bool leftToRight = true;
    while (!q.empty()) {
        //vv.push_back(vector<int>(q.size()));
        vector<int> v;
        int s = q.size();
        for (int i = 0; i < s;i++) {
            TreeNode* node = q.front();
            q.pop();
            v.push_back(node->val);
            if (node->left) {
                q.push(node->left);
            }
            if (node->right) {
                q.push(node->right);
            }
        }
        if (leftToRight) {
            vv.push_back(v);
        } else {
            vv.push_back(vector<int>(v.rbegin(), v.rend()));
        }
        leftToRight = !leftToRight;
    }
    return vv;
}

int main() {
    return 0;
}
