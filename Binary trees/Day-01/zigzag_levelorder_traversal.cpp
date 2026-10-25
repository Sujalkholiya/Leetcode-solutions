//leetcode->103. Binary Tree Zigzag Level Order Traversal
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        bool lefttoright=true;
        while(!q.empty()){
            int n=q.size();
            vector<int>level;
            for(int i= 0;i<n;i++){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
                level.push_back(temp->val);
            }
            if(!lefttoright){
                reverse(level.begin(),level.end());
            }
            ans.push_back(level);
            lefttoright=!lefttoright;
        }
        return ans;
    }
};