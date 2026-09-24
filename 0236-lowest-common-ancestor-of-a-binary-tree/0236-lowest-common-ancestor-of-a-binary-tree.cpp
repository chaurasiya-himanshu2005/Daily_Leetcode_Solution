/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> a;
    vector<TreeNode*> b;
    void paths(TreeNode* root, vector<TreeNode*>& arr, TreeNode* p, TreeNode* q){
        if(root == NULL) return;
        arr.push_back(root);
        if(root == p) a = arr; // a me arr ki copy gyi hai
        if(root == q) b = arr; // b. me arr ki copy gyi hai
        paths(root->left, arr,p, q);
        paths(root->right, arr, p, q);
        arr.pop_back();
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        a.resize(0);
        b.resize(0);
        vector<TreeNode*> arr;
        paths(root,arr, p, q);
        int i = 0, j = 0;
        while(i< a.size() && j < b.size()){
            if(a[i] == b[j]){
                i++;
                j++;
            }else break;
        }
        return a[i-1];
    }
};