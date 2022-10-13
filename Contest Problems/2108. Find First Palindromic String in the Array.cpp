class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        string s="";
        for (int i=0;i<n;i++)
        {
            s=words[i];
            reverse(s.begin(),s.end());
            if(s==words[i])
            {
                return words[i];
            }
            s="";
        }
        return s;
    }
};