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

void DFS(TreeNode* root, int depth, vector<vector<int> >& vvi) {
    if (!root)
        return;
    if (vvi.size() == depth) {
        vvi.push_back(vector<int>());
    }
    vvi[depth].push_back(root->val);
    DFS(root->left, depth+1, vvi);
    DFS(root->right, depth+1, vvi);
}

vector<vector<int> > levelOrderBottom(TreeNode* root) {
    vector<vector<int> > vvi;
    DFS(root, 0, vvi);
    return vector<vector<int> > (vvi.rbegin(), vvi.rend());
        
}

int main() {
    return 0;
}
