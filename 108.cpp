#include <iostream>
#include <vector>
#include <algorithm>

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

TreeNode* sortedArrayToBST(vector<int>& nums) {
    if (nums.size() == 0) {
        return NULL;
    }
    int mid =nums.size()/2;
    TreeNode* root = new TreeNode(nums[mid]);
    vector<int> vl(nums.begin(), nums.begin()+mid);
    vector<int> vr(nums.begin()+mid+1, nums.end());
    root->left = sortedArrayToBST(vl);
    root->right = sortedArrayToBST(vr);
    return root;
}

int main() {
    return 0;
}
