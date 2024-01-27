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
    bool isLeaf(TreeNode*root){
        if(root->right==NULL&&root->left==NULL){
            return true;
        }
        return false;
    }
    bool isSum(TreeNode*root,int targetSum,int&sum){
        if(root==NULL){
            return false;
        }
        
        sum= sum+(root->val);
        // if(sum>targetSum){
        //     sum=sum-root->val;
        //     return false;
        // }
         if(isLeaf(root)&&sum==targetSum){
            return true;
        }
        bool left=isSum(root->left,targetSum,sum);
        bool right=isSum(root->right,targetSum,sum);
        
     if(left||right==true){
            return true;
        }
        else{
            sum=sum-root->val;
            return false;
        }
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        // int newsum=abs(targetSum);
        return isSum(root,targetSum,sum);
    }
};