class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return root==NULL||sym(root->left,root->right);
    }
    bool sym(TreeNode* l,TreeNode* r){
        if(l==NULL||r==NULL){
            return l==r;
        }
        if(l->val!=r->val){
            return false;
        }
        return sym(l->left,r->right)&& sym(l->right,r->left);
    }
};