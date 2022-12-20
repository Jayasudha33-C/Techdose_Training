class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=inorder.size();
        int idx=0;
        return helper(preorder,inorder,idx,0,n-1);
  }
  TreeNode* helper(vector<int> &preorder,vector<int>&inorder,int &idx,int left,int right){
      if(left>right) return{};
      int pivot=left;
      while(inorder[pivot]!=preorder[idx])
          pivot++;
          idx++;
      TreeNode* root=new TreeNode(inorder[pivot]);
      root->left=helper(preorder,inorder,idx,left,pivot-1);
      root->right=helper(preorder,inorder,idx,pivot+1,right);
      return root;
  }
};