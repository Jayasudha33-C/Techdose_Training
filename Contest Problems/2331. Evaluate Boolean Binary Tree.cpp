class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        if(root->val==1 || root->val==0){
            return root->val;
        }
        bool left=evaluateTree(root->left);
        bool right=evaluateTree(root->right);
        if(root->val==3){
           return left and right;
        }
        else{
            return left or right;
        }
    }
};