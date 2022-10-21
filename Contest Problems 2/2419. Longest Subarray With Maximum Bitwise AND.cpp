class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int m=INT_MIN,res=0,len,j;
        for(auto i:nums){
            m=max(m,i);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==m){
                len=0;
                j=i;
                while(j<nums.size() && nums[j]==nums[i]){
                    len++,j++;
                }
                i=j-1;
                res=max(res,len);
            }
        }
        return res;
    }
};