int minv(int a,int b){ return a<b?a:b;}
class Solution{
    public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        ios_base::sync_with_stdio(false); 
        cin.tie(NULL);
        cout.tie(NULL);
        int dist[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                dist[i][j] = INT_MAX/2;
            }
            dist[i][i] = 0;
        }
        for(int i=0;i<edges.size();i++)
        {
            int u1 = edges[i][0];
            int v1 = edges[i][1];
            int w = edges[i][2];
            dist[u1][v1] = w;
            dist[v1][u1] = w;
        }
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(i!=k && j!=k){
                        dist[i][j] = minv(dist[i][j],dist[i][k] + dist[k][j]);
                    }
                }
            }
        }
        int ans,val = INT_MAX;
        for(int i=0;i<n;i++)
        {
            int count = 0;
            for(int j=0;j<n;j++){
                if(dist[i][j]<=distanceThreshold) count++;
            }
            if(count <= val){
                ans = i;
                val = count;
            }
        }
        return ans;
    }
};