class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> res;
         for(int i=0;i<2*n;i++){
             res.push_back(nums[i%n]);
         }
        return res;
    }
};