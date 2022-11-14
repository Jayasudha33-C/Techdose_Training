class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> output;
        int index=0;
        permutate(nums,index,output);
        return output;
    }
    void permutate(vector<int>&nums,int index,vector<vector<int>>&output)
    {
      if(index>=nums.size()){
          output.push_back(nums);
          return;
      }
      for(int i=index;i<nums.size();i++){
          swap(nums[index],nums[i]);
          permutate(nums,index+1,output);
          swap(nums[index],nums[i]);
      }
    }
};