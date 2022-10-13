class Solution {
public:
    char repeatedCharacter(string s) {
         vector<int>arr(26);
        for(char a:s){
            arr[a-'a']++;
            if(arr[a-'a']>1)
                  return a;
        }
        return 'a';
    }
};