class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int n= nums.size();   
        map<int, vector<int>> mp; 
        int sum;
        sort(nums.begin() , nums.end(),greater<int>()); 
        for(int i=0;i<n;i++)
        {
            int num= nums[i], sum=0;
            while(num)        
            {
               sum+=num%10;
               num/=10;
            }
            mp[sum].push_back(i);  
        }
        int maxm=-1;
        for(auto it:mp)
        {
            if(it.second.size() >1)  
            {
              int num= nums[it.second[0]]+ nums[it.second[1]];                                                                      element
              maxm=max(maxm,num );
            }
        }
        return maxm;
    }};