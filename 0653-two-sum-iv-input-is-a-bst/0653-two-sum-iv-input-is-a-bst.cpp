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
    void inorderarr(vector<int>&arr,TreeNode*root){
        if(root==NULL){
            return;
        }
        
        inorderarr(arr,root->left);
        arr.push_back(root->val);
        inorderarr(arr,root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>arr;
        inorderarr(arr,root);
        int p=0;
        int q=arr.size()-1;
        while(p<q){
            if((arr[p]+arr[q])==k){
                return true;
            }
            if((arr[p]+arr[q])>k){
                q--;
            }
            else{
                p++;
            }
        }
        return false;
    }
};