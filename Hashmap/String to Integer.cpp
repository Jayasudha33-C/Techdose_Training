class Solution {
public:
    int myAtoi(string s) {
       int v=atoi(s.c_str());
       try{
           stoi(s);
       }
       catch(const out_of_range& e){
           for(int i=0;i<s.length();i++){
               if(s[i]=='-')
               return 
           }
       }
    }
};