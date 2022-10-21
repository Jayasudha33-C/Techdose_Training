class Solution {
public:
    long long int maxSum(vector<vector<int>>& grid) {
        long long int r=grid.size();
        long long int c=grid[0].size();
        long long int currsum=INT_MIN;
         long long int maxsum=INT_MIN;
        if(r==3 and r==c){
            return (grid[0][0]+grid[0][1]+grid[0][2]+grid[1][1]+grid[2][0]+grid[2][1]+grid[2][2]);
        }
           for(int i=0;i+2<r;i++){
               for(int j=0;j+2<c;j++){
                   long long int x=grid[i][j]+grid[i][j+1]+grid[i][j+2];
                   long long int y=grid[i+1][j+1];
                   long long int z=grid[i+2][j]+grid[i+2][j+1]+grid[i+2][j+2];
                   currsum=x+y+z;
                   maxsum=max(currsum,maxsum);
               }
           }
       
      return maxsum; 
    }
};ss