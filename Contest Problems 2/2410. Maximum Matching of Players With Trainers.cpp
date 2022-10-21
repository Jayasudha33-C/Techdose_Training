class Solution {
public:
   int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
        int count=0;
        sort(p.begin(),p.end());
        sort(t.begin(),t.end());
        int j=0;
        for(int i=0;i<p.size();i++){
            while(j<t.size()){
                if(t[j++]>=p[i]){
                    count++;
                    break;
                }
            }
        }
        return count;
    }};