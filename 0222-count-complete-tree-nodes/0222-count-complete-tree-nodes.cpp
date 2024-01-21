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
    void inordertraversal(TreeNode*root,vector<int>&arr){
        if(root==NULL){
            return;
        }
        inordertraversal(root->left,arr);
        arr.push_back(root->val);
        inordertraversal(root->right,arr);
    }
    int countNodes(TreeNode* root) {
        vector<int>arr;
        inordertraversal(root,arr);
        return arr.size();
    }
};