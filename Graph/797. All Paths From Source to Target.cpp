class Solution {
public:
   void dfs(vector<vector<int>>& graph,vector<vector<int>>&res,vector<int>&path,int u){
       path.push_back(u);
       if(u==graph.size()-1) 
            res.push_back(path);
        else
            for(int v:graph[u]) 
              dfs(graph,res,path,v);
        path.pop_back();
   }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>res;
        vector<int>path;
        dfs(graph,res,path,0);
        return res;
    }
};