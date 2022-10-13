class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> v;
        set<int> s;
        int n=digits.size();
        int no=0;
        for(int i=0; i<n;i++){
         if(digits[i]==0)
             continue;
         for(int j=0; j<n;j++){
             if(j==i)
                 continue;
             for(int k=0;k<n;k++){
                 if(k==j|| k==i  ){
                     continue;
                 } no= digits[i]*100+digits[j]*10+digits[k];
                 if(no>=100 && no%2==0)
                     s.insert(no);
             }
         }}
         int k=0;
         for(auto itr=s.begin(); itr!= s.end();itr++){
           k= *itr;
             v.push_back(k);
         }
        sort(v.begin(), v.end());
        return v;
    }
};