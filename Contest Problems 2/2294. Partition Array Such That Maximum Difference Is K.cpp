class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1)
            return 1;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=i+1;
        int ans=0;
        while(j<n && i<n){
            if(k>=nums[j]-nums[i]){
                j++;
            }
            else{
                ans++;
                i=j;
                j=i+1;
            }
        }
        ans++;
        return ans;
    }
};