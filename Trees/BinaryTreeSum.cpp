class Solution {
public:
    int maxi=INT_MIN;
    int demo (TreeNode* root){
        if (root==NULL)return 0;
        int ls= max(0,demo(root->left));   
        int rs= max(0,demo(root->right));
        maxi = max(maxi, root->val+ls+rs); 
        return root->val + max(ls,rs); 
        }
    int maxPathSum(TreeNode* root) {
        demo(root);
        return maxi;
    }
};