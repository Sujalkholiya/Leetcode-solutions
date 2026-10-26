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
private:
    bool tsum(TreeNode* root,int targetSum,int sum){
        if(root==NULL){
            return false;
        }
        sum=sum+root->val;
        if(root->left==NULL&&root->right==NULL){
            if(sum==targetSum){
                return true;
            }
            return false;
        }
        return tsum(root->left,targetSum,sum)||tsum(root->right,targetSum,sum);
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL){
            return false;
        }
        return tsum(root,targetSum,0);
    }
};