class Solution {
public:
    int longestContinuousSubstring(string s) 
    {
        int count=1;
        int mx = 1;
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]+1 == s[i+1]) count++;                    
            else count = 1;     
            mx = max(mx,count);                              
        }
        return mx;
    }
};