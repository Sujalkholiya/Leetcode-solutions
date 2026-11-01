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
    void inorder(TreeNode* root,vector<TreeNode*>&ans){
        if(root==NULL){
            return ;
        }
        inorder(root->left,ans);
        ans.push_back(root);
        inorder(root->right,ans);
    }
public:
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL){
            return NULL;
        }
        vector<TreeNode*>ans;
        inorder(root,ans);
        int n=ans.size();
        for(int i=0;i<n-1;i++){
            ans[i]->left=NULL;
            ans[i]->right=ans[i+1];
        }
        ans[n-1]->right=NULL;
        ans[n-1]->left=NULL; 
        return ans[0];
    }
};