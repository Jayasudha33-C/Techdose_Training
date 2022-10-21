class Solution {
public:
        int edgeScore(vector<int>& edges) {
        unordered_map<int, long long> mp;
        int mxi = 0;
        for(int i = 0; i < edges.size(); ++i){
            mp[edges[i]] += i;
            if(mp[mxi] < mp[edges[i]])
            { 
                mxi = edges[i]; 
            }
            else if(mp[mxi] == mp[edges[i]] && mxi > edges[i])
            { 
                mxi = edges[i];
            }
        }
        return mxi;
    }
};