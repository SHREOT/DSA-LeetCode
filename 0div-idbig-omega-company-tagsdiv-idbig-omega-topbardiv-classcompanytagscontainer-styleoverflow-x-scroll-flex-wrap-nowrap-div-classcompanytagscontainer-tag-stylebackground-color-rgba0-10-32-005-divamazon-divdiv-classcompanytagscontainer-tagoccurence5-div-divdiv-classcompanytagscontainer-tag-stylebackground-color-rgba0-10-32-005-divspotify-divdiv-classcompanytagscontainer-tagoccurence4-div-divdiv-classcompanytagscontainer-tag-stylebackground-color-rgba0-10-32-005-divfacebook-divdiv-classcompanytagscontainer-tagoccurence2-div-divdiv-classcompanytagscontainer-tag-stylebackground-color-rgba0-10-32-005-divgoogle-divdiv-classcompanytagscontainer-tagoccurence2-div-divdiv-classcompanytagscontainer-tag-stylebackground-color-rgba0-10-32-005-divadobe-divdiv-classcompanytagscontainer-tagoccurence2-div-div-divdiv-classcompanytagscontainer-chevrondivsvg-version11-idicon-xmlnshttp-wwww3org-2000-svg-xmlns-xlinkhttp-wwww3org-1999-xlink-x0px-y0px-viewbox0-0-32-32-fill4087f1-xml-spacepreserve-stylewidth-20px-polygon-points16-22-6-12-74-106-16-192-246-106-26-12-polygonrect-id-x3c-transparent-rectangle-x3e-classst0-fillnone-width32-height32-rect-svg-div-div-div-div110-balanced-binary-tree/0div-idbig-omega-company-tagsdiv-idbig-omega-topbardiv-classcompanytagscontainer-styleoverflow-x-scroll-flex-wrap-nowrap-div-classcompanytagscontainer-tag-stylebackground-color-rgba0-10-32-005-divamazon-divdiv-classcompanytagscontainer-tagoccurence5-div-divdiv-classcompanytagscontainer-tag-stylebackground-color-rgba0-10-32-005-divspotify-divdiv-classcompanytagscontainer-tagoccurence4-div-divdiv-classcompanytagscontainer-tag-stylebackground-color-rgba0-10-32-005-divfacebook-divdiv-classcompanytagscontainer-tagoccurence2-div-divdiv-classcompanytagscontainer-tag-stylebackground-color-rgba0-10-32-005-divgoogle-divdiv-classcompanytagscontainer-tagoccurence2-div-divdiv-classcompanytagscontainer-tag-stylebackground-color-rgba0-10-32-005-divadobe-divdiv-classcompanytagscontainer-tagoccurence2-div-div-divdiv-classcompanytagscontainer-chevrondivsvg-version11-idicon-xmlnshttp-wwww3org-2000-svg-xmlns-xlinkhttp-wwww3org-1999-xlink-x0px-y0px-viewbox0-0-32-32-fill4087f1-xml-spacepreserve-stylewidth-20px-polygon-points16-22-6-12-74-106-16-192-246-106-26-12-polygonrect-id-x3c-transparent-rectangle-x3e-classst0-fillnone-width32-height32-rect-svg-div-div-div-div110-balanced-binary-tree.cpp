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
     int height(TreeNode*root){
         if(root==NULL){
             return 0;            
         }

         int rightheight=height(root->right);
         int leftheight =height(root->left);
         int ans = 1+max(rightheight,leftheight);
         return ans;
     }
    bool isBalanced(TreeNode* root) {        
        if(root==NULL){
            return true;
        }

        int rightheight=height(root->right);
        int leftheight=height(root->left);
        int diff=abs(rightheight-leftheight);

        bool ans =(diff<=1);
         
        bool rightheig=isBalanced(root->right); 
        bool leftheig=isBalanced(root->left);

        if(ans && rightheig && leftheig){
            return true;
        } 
        else{
            return false;
        }

    }
};