bool compareSizes(const string &lhs, const string &rhs) {
    return lhs.length() > rhs.length();
}
class Solution {
public:
    string frequencySort(string s) {
        vector<string> freq(100,"");
        for (char a : s) freq[a-'0'] += a;
        sort(freq.begin(), freq.end(), compareSizes);
		string ans = "";
        for (string str : freq) ans += str;
        return ans;
    }
};