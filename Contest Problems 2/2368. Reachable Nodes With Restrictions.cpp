class Solution {
public:
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
		
        unordered_set<int> st;
        for(auto r: restricted) st.insert(r);
		vector<vector<int>> g(n);
        for(auto e: edges){
            g[e[0]].push_back(e[1]);
            g[e[1]].push_back(e[0]);
        }
        queue<int> q;
        vector<int> vis(n, 0);
        q.push(0);
        vis[0] = 1;
        int ans = 0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans++;
            for(auto i: g[node]){
                if(vis[i] == 0 && st.find(i) == st.end()){
                    vis[i] = 1;
                    q.push(i);
                }
            }
        }
        return ans;
    }
};