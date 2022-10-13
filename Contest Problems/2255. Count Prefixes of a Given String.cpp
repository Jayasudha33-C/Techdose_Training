class Solution {
public:    
    int countPrefixes(vector<string>& words, string s) 
    {
        int count=0;
        for(auto it: words)
        {
            string str = s.substr(0, it.size());
            if(str == it) count++;            
        }
        return count;        
    }
};