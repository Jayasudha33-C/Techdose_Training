class Solution {
public:
            string removeDigit(string s, char digit) {
        for(int i=0;i<s.size()-1;i++)
            if(s[i]==digit && s[i] < s[i+1]) return s.erase(i, 1);
        return s.erase(s.find_last_of(digit), 1);
    }
};