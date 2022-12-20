class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isvalid(root,NULL,NULL);
    }
    bool isvalid(TreeNode* root,TreeNode* min,TreeNode* max){
        if(!root) return true;
        if(min && root->val<=min->val|| max && root->val>=max->val)
        return false;
        return isvalid(root->left,min,root)&& isvalid(root->right,root,max);
    }
};