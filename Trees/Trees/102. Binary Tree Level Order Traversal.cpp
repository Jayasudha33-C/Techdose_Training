class Solution {
public:
   vector<vector<int>> ans;
   void buildVector(TreeNode* root,int dep){
       if(root==NULL)return;
       if(ans.size()==dep)
        ans.push_back(vector<int>());
       ans[dep].push_back(root->val);
       buildVector(root->left,dep+1);
       buildVector(root->right,dep+1);
   }
    vector<vector<int>> levelOrder(TreeNode* root) {
        buildVector(root,0);
        return ans;
    }
};