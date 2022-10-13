class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector<int>ans;
        if(nums.size()%2!=0){
            return false;
        }
        else{
             sort(nums.begin(),nums.end());
            int i=1;
             while(i<nums.size()){
                 if(nums[i]!=nums[i-1])
                     return false;
                 else
                     i+=2;
             }}
            return true;
        }
};