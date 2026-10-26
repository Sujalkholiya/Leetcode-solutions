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
    int leftcount(TreeNode* root){
        int dep=0;
        while(root!=NULL){
            dep++;
            root=root->left;
        }
        return dep;
    }
    int rightcount(TreeNode* root){
        int dep=0;
        while(root!=NULL){
            dep++;
            root=root->right;
        }
        return dep;
    }
public:
    int countNodes(TreeNode* root) {
       if(root==NULL){
        return 0;
       } 
       int left=leftcount(root);
       int right=rightcount(root);
       if(left==right){
        return (1 << left) - 1;
       }
       return 1+countNodes(root->left)+countNodes(root->right);
    }
};