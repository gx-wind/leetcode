#include <iostream>
#include <cmath>

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

int countNodes(TreeNode* root) {
    if (!root) 
        return 0;
    int ldepth = 0, rdepth = 0;
    TreeNode* l = root;
    TreeNode* r = root;
    while (l) {
        ldepth++;
        l = l->left;
    }
    while(r) {
        rdepth++;
        r = r->right;
    }
    if (ldepth == rdepth) {
        return pow(2,ldepth)-1;
    }
    return countNodes(root->left)+countNodes(root->right)+1;
}

int main() {
    return 0;
}
