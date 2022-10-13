class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n=s.length();
        double c=0;
        for(int i=0;i<n;i++){
            if(s[i]==letter)
                 c++;
        }
        if(c==0){
            return c;
        }
        else{
            return c/n*100;
        }
    }
};