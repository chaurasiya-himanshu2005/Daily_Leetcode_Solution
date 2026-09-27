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
    TreeNode* inorderPred(TreeNode* root){
        TreeNode* pred = root->left;
        while(pred->right != NULL){
            pred = pred->right;
        }
        return pred;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return NULL;
        if(root->val == key){
            // case 1: no child
            if(root->left == NULL && root->right == NULL) return NULL;

            // case 2: 1 child
            if(root->left == NULL || root->right == NULL){
                if(root->left != NULL) return root->left;
                else return root->right;
            }

            // case 3 : 2 child node
            if(root->left != NULL && root->right != NULL){
                // replace the node with its inorder predecessor/successor
                // after replacing delete the pred/suc
                TreeNode* pred = inorderPred(root);
                root->val = pred->val;
                root->left = deleteNode(root->left, pred->val);
            }
        }
        else if(root->val > key){ // go left
            root->left = deleteNode(root->left, key);
        }
        else if(root->val < key){ // go right
            root->right = deleteNode(root->right, key);
        }
        return root;
    }
};