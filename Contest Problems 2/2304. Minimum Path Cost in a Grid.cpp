class Solution {
public:
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
        int ans=1e8 , n=grid.size() , m=grid[0].size();
        if(n==1) 
            return 0;
        for(int i=n-2;i>=0;i--)
        {
           for(int j=0;j<m;j++)
            {
                int c,d=1e8;
                for(int k=0;k<m;k++)
                {
                    c=moveCost[grid[i][j]][k]+grid[i+1][k];
                    d=min(d,c);
                }
                grid[i][j]+=d;
            }
        }
        for(int i=0;i<m;i++) 
             ans=min(ans,grid[0][i]);
        return ans;
    }
};