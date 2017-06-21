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

void inorderRecursive(TreeNode* root, vector<int>& v) {
    if (!root) {
        return;
    }
    inorderRecursive(root->left, v);
    v.push_back(root->val);
    inorderRecursive(root->right, v);
}

vector<int> inorderTraversal(TreeNode* root) {
    vector<int> v;
    inorderRecursive(root, v);
    return v;
}

vector<int> inorderTraversalNonRecursive(TreeNode* root) {
    vector<int> v;
    stack<TreeNode*> s;

    while (true) {
        while (root) {
            s.push(root);
            root = root->left;
        }
        if (s.empty())
            break;
        root = s.top();
        s.pop();
        v.push_back(root->val);
        root = root->right;
    } 
    return v;
}

int main() {
    return 0;
}
