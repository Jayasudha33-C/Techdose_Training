class Solution {
public:
    TreeNode* help2(vector<int>&v,int st,int end){
        if(st>end)return{};
        int mid=st+(end-st)/2;
        TreeNode* root=new TreeNode(v[mid]);
        root->left=help2(v,st,mid-1);
        root->right=help2(v,mid+1,end);
        return root;
    }
    void help1(TreeNode* root,vector<int>&v){
    if(!root)return;
      help1(root->left,v);
      v.push_back(root->val);
      help1(root->right,v);
    }    
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>v;
        help1(root,v);
        return help2(v,0,v.size()-1);
    }
};