class Solution {
public:
    bool check(vector<int>&nums,vector<long long>&vec,int step,long long val)
    {
        if(step>=nums.size()) return true;
        long long cur=nums[step];
        for(int i=0;i<vec.size();i++)
        {
            if(cur+vec[i]<=val)
            {
                vec[i]+=cur;
                if(check(nums,vec,step+1,val)) return true;
                vec[i]-=cur;
            }
            if(vec[i]==0) break;
        }
        return false;
    }
    int minimumTimeRequired(vector<int>& nums, int k) {
        long long l=*max_element(nums.begin(),nums.end());
        long long r=accumulate(nums.begin(),nums.end(),0);
        while(l<r)
        {
            long long mid=(l+r)/2;
            vector<long long>vec(k,0);
            if(check(nums,vec,0,mid))
            {
                r=mid;
            }
            else
                l=mid+1;
        }
        return l;
    }
};