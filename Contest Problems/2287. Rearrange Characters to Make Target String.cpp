class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        map<char,int> mpp,mpp2;
        for(auto it: s) mpp[it]++;
        for(auto it: target) mpp2[it]++;
        int mini=INT_MAX;
        for(int i=0;i<target.size();i++) {
            if(mpp[target[i]]==0) return 0;
           else
           {
              mini=min(mini, mpp[target[i]]/mpp2[target[i]]);
           }
        }
        return mini;
    }
};
 