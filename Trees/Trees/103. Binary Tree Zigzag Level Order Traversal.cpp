class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root) return {}; // return if root is null
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> out; 
        while (!q.empty()) {         
            int sz = q.size(); 
            vector<int> curr(sz);
            for (int i = 0; i < sz; i++) {
                TreeNode* tmp = q.front();
                q.pop();
                curr[i] = tmp->val; 
                if (tmp->left) q.push(tmp->left);
                if (tmp->right) q.push(tmp->right);
            }
            out.push_back(curr); 
        }
        return out;
    }
};