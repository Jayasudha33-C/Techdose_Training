class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string>ans;
        char leftChar = s[0];
        char rightChar = s[3];
        while (leftChar <= rightChar){
            int low = s[1] - '0', high = s[4] - '0';
            while (low <= high){
                ans.push_back(leftChar + to_string(low));
                low++;
            }
            leftChar++;
        }
        return ans;
    }
};