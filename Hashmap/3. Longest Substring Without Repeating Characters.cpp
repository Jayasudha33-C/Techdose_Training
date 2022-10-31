class Solution 
{
public:
    int lengthOfLongestSubstring(string s) 
    {
        int max_len = 0;
        vector<int> pos(128,0);
        int start=0;
        for (int end = 0; end < s.size(); end++)
        {
            auto ch = s[end];
            start = max(start, pos[ch]);
            max_len = max(max_len, end-start+1);
            pos[ch] = end + 1;
        }                
        return max_len;
    }
};