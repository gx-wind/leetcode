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

void depSearch(TreeNode *root, vector<string>& strs, string s) {
    if (!root) {
        return;
    }
    s += root->val+ '0';
    if (root->left == NULL && root->right == NULL) {
        strs.push_back(s);
        return;
    }
    if (root->left) {
        depSearch(root->left, strs, s);
    }
    if (root->right) {
        depSearch(root->right, strs, s);
    }
}

int sumNumbers(TreeNode* root) {
    int res = 0;
    vector<string> strs;
    string s;
    depSearch(root, strs, s);
    for (int i = 0; i < strs.size(); i++) {
        res += stoi(strs[i]);
    }
    return res;
}

int main() {
    return 0;
}
