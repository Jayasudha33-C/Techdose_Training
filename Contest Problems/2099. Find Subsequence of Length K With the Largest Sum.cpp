class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k){       
        vector<int> ans,temp(nums.begin(),nums.end());
        sort(temp.begin(),temp.end(),greater<int>());
        temp.resize(k);
        unordered_map<int,int> m;  
        for(int &i:temp)
        {
            m[i]++;
        }
        for(int &i:nums)
        {
            if(m[i]!=0)
            {
                ans.push_back(i);
                m[i]--;
            }
        }
        return ans;
    }
};