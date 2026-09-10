/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool ans;
    int levels(TreeNode* root){
        if(root == NULL) return 0;
        int left = levels(root->left);
        int right = levels(root->right);
        if(abs(left-right) > 1) ans = false;
        return 1 + max(left, right);
    }
    bool isBalanced(TreeNode* root) {
        ans = true; //true means balanced
        levels(root);
        return ans;
    }
};