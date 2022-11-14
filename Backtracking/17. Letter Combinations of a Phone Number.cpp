class Solution {
public:
  void helper(string digits,vector<string>&ans,int index,string map[],string output){
      if(index>=digits.length()){
         ans.push_back(output);
         return;          
      }
      int num=digits[index]-'0';
      string val=map[num];
      for(int i=0;i<val.length();i++){
          output.push_back(val[i]);
          helper(digits,ans,index+1,map,output);
          output.pop_back();
      }
  }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string output="";
        if(digits.length()==0){
            return ans;
        }
        string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int index=0;
        helper(digits,ans,index,map,output);
        return ans;
    }
};