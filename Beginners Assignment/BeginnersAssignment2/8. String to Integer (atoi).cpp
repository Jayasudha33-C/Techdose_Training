class Solution {
public:
    int myAtoi(string s) {
        
        int val = atoi(s.c_str());
        try{
            stoi(s);
        }
        catch(const out_of_range& e){
            for(int i = 0; i < s.length(); i++){
                if(s[i] == '-')
                    return -2147483648;
            }

            return 2147483647;
        }
        catch(const invalid_argument& f){
            return 0;
        }
        
        return val;
        
    }
};
 