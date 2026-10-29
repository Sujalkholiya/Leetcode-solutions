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
    TreeNode* solve(vector<int>preorder,vector<int>inorder,int prestart,int preend,int instart,int inend){
        if(prestart>preend){
            return NULL;
        }
        int rootval=preorder[prestart];
        TreeNode* root=new TreeNode(rootval);
        int rootindex=instart;
        while(inorder[rootindex]!=rootval){
            rootindex++;
        }
        int leftsize=rootindex-instart;
        root->left=solve(preorder,inorder,prestart+1,prestart+leftsize,instart,rootindex-1);
        root->right=solve(preorder,inorder,prestart+leftsize+1,preend,rootindex+1,inend);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       return solve(preorder,inorder,0,preorder.size()-1,0,inorder.size()-1);
    }
};