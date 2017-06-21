#include <iostream>
#include <vector>
#include <stack>

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

void preorderRecursive(TreeNode* root, vector<int> &v) {
    if (!root) 
        return;
    v.push_back(root->val);
    preorderRecursive(root->left, v);
    preorderRecursive(root->right, v);
}

vector<int> preorderTraversal(TreeNode* root) {
    vector<int> v;
    preorderRecursive(root, v);
    return v;
}

vector<int> preorderNonRecursive(TreeNode* root) {
    vector<int> v;
    stack<TreeNode*> s;
    while(true) {
        while(root) {
            s.push(root);
            v.push_back(root->val);
            root = root->left;
        }
        if (s.empty())
            break;
        root = s.top();
        s.pop();
        root = root->right;
    }
    return v;
}

int main() {
    return 0;
}
