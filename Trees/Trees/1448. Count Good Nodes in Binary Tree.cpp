class Solution {
public:
     int count=0; 
    int goodNodes(TreeNode* root) {
        if(root==NULL)return count;
        dfs(root,root->val);
        return count;
    }
    void dfs(TreeNode* root,int val){
        if(root==NULL)return;
        if(root->val>=val) count++;
        dfs(root->left,max(val,root->val));
        dfs(root->right,max(val,root->val));
    }
};
