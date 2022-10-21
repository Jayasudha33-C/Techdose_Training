class Solution {
public:
     int mod = 1e9+7;
int numberOfWays(int startPos, int endPos, int k) {
       if(startPos > endPos)
           swap(startPos , endPos);
       int target = endPos-startPos;
       if(target > k)
           return 0;
       int sum = k+target;
       if((sum&1)==1)  
           return 0;
       return helper(k,sum/2);
   }
 int helper(int n , int target){
       vector<int> dp(target+1,0);
       dp[0] = 1;
       for(int i = 1 ; i <= n ; i++){
           for(int j = target ; j >= 1 ; j--){
               dp[j] = (dp[j]+dp[j-1])%mod;
           }   
       }
       return dp[target];
   }
};