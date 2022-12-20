class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0;
        check(root,d);
        return d;
    }
    int check(TreeNode* root,int &d){
        if(!root)return NULL;
        int lst=check(root->left,d);
        int rst=check(root->right,d);
        d=max(d,lst+rst);
        return max(lst,rst)+1;
    }
};