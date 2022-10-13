class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> res;
        vector<int>k,j;
        unordered_set<int>s1,s2;
        for(auto i:nums1){
            s1.insert(i);
        }
        for(auto i:nums2){
            s2.insert(i);
        }
        for(auto i:nums1){
            if(s2.count(i)==0){
                k.push_back(i);
                s2.insert(i);
            }
        }
        for(auto i:nums2){
            if(s1.count(i)==0){
                j.push_back(i);
                s1.insert(i);
            }
        }
      res.push_back(k);
      res.push_back(j);
        return res;
    }
};