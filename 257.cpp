#include <iostream>
#include <string>
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

void depSearch(TreeNode* root, string s, vector<string>& vs, bool isRoot) {
    if (!root) {
        return;
    }
    if (isRoot) {
        s += to_string(root->val);
    } else {
        s += "->"+to_string(root->val);
    }
    if (!root->left && !root->right) {
        vs.push_back(s);
        return;
    }
    depSearch(root->left, s, vs, 0);
    depSearch(root->right, s, vs, 0);
}

vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> vs;
    string s; 
    depSearch(root, s, vs, 1);
    return vs;
}

int main() {
    return 0;
}
