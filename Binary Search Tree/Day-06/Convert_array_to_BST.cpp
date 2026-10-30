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
    TreeNode* realbst(vector<int>nums,int start,int end){
        int mid=start+(end-start)/2;
        if(start>end){
            return NULL ;
        }
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=realbst(nums,start,mid-1);
        root->right=realbst(nums,mid+1,end);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        return realbst(nums,0,n-1);

    }
};