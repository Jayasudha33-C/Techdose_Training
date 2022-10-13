class Solution {
public:
    int minimumOperations(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        int sum=0,c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-sum==0)
                continue;
            else
                sum+=nums[i]-sum;
                c++;
        }
       return c;
    }
};