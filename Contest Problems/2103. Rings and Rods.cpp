class Solution {
public:
    int countPoints(string rings) {
        int r[10]={0}, g[10]={0}, b[10]={0};
        int ans =0;
        int n = rings.size();
        for(int i=1; i<n; i += 2){
            if(rings[i-1] == 'B'){
                b[rings[i]-'0']++;
            }
            else if(rings[i-1] == 'G'){
                g[rings[i]-'0']++;
            }
            else if(rings[i-1] == 'R'){
                r[rings[i]-'0']++;
            }
        }
        for(int i=0; i<10; i++){
            if(r[i]>0 && b[i]>0 && g[i]>0){
                ans++;
            }
        }
        return ans;
    }
};