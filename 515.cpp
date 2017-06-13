#include <iostream>
#include <vector>
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

vector<int> largestValues(TreeNode* root) {
    queue<TreeNode*> q;
    vector<int> res;
    if (root) {
        q.push(root);
    }
    while (!q.empty()) {
        vector<TreeNode*> v;
        int maxValue = INT_MIN;
        while (!q.empty()) {
            v.push_back(q.front());
            if (q.front()->val > maxValue) {
                maxValue = q.front()->val;
            }
            q.pop();
        }
        res.push_back(maxValue);
        for(int i = 0; i < v.size(); i++) {
            if (v[i]->left) {
                q.push(v[i]->left);
            }
            if (v[i]->right) {
                q.push(v[i]->right);
            }
        }
    }
    return res;
}

int main() {
    return 0;
}
