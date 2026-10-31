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
    int inorder(TreeNode* root,int k,int &ans,int &count){
        if(root==NULL){
            return 0;
        }
        inorder(root->left,k,ans,count);
        count++;
        if(count==k){
            ans=root->val;
            return ans;
        }
        inorder(root->right,k,ans,count);
        return ans;
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        int ans=0;
        int count=0;
        inorder(root,k,ans,count);
        return ans;
    }
};