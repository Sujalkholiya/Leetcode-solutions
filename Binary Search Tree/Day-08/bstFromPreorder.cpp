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
    TreeNode* bst(vector<int>& preorder,int&i,int lower,int upper){
        if(i==preorder.size()){
            return NULL;
        }
        int value=preorder[i];
        
        if(value<=lower||value>=upper){
            return NULL;
        }
        TreeNode* root=new TreeNode(value);
        i++;
        root->left=bst(preorder,i,lower,value);
        root->right=bst(preorder,i,value,upper);
        return root;
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return bst(preorder,i,INT_MIN,INT_MAX);
    }
};