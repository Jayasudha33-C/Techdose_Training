class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root)return NULL;
       invertTree(root->left);
      invertTree(root->right);
      std::swap(root->left,root->right);
        return root;
    }
};