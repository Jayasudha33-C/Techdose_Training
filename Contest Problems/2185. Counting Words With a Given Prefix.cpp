class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int c=0;
        int n=pref.size();
        for(auto i:words){
            if(i.substr(0,n)==pref)
                c++;
        }
        return c;
    }
};