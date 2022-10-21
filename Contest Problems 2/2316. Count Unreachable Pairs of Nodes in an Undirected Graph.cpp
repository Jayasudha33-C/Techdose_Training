class Solution {
public:
        long long  dfs(vector<vector<int>>& vec,int si,vector<bool>& visit){   
        if(visit[si])return 0;
        visit[si] = true;
        long long  count = 1;
        for(int i=0;i<vec[si].size();i++){
            if(visit[vec[si][i]])continue;
            count+= dfs(vec,vec[si][i],visit);   
        }
        return count;  
    }
    long long countPairs(int n, vector<vector<int>>& edges){   
        vector<vector<int>> vec(n);
        for(int i=0;i<edges.size();i++){
            int a = edges[i][0];
            int b = edges[i][1];
             vec[a].push_back(b);
            vec[b].push_back(a);
        }
        vector<bool> visit(n,false); 
        long long  count = 0;
        long long  ans = 0;
        for(int i = 0;i<n;i++){
            if(visit[i])continue;
            long long  x = dfs(vec,i,visit);
            ans += count*x;
            count+= x;
        } 
  return ans;        
    }
};   