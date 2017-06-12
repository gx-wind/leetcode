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

void depSearch(vector<vector<int> >& res, TreeNode* root, int depth) {
    if (!root) 
        return;
    if(res.size() == depth)
        res.push_back(vector<int>());
    res[depth].push_back(root->val);
    depSearch(res, root->left, depth+1);
    depSearch(res, root->right, depth+1);
}

vector<vector<int> > levelOrder(TreeNode* root) {
    vector<vector<int> > res;
    depSearch(res, root, 0);
    return res;
}

int main() {
    return 0;
}
