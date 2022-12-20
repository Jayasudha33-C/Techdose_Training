class Solution {
public:
    void check(TreeNode* root,int level,vector<int>&res){
        if(root==NULL)return;
        if(res.size()<level)res.push_back(root->val);
        check(root->right,level+1,res);
        check(root->left,level+1,res);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>res;
        check(root,1,res);
        return res;
    }
};