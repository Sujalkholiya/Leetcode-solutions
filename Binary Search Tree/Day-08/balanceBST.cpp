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
    void solve(TreeNode* root,vector<TreeNode*>&ans){
        if(root==NULL){
            return;
        }
        solve(root->left,ans);
        ans.push_back(root);
        solve(root->right,ans);
    }
    TreeNode* bbst(vector<TreeNode*>&ans,int s,int e){
        if(s>e){
            return NULL;
        }
        int mid=(s+e)/2;
        TreeNode* root= ans[mid];
        root->left=bbst(ans,s,mid-1);
        root->right=bbst(ans,mid+1,e);
        return root;
    }

public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<TreeNode*>ans;
        solve(root,ans);
        return bbst(ans,0,ans.size()-1);
    }
};