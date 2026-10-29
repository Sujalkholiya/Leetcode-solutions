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
    TreeNode* solve(vector<int>inorder, vector<int>postorder,int instart,int inend,int poststart,int postend){
        if(instart>inend||poststart>postend){
            return NULL;
        }
        int rootval=postorder[postend];
        TreeNode* root=new TreeNode(rootval);
        int rootindex=instart;
        while(inorder[rootindex]!=rootval){
            rootindex++;
        }
        int leftsize=rootindex-instart;
        root->left=solve(inorder,postorder,instart,rootindex - 1, poststart, poststart + leftsize - 1);
        root->right=solve(inorder,postorder,rootindex+1,inend,poststart+leftsize,postend-1);
        return root;
    }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return solve(inorder,postorder,0,inorder.size()-1,0,postorder.size()-1);
    }
};