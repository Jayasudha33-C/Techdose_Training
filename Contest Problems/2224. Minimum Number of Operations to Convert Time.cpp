class Solution {
public:
        int convertTime(string current, string correct) {
    auto toMin = [](string &s) { 
        return s[0] * 600 + s[1] * 60 + s[3] * 10 + s[4] ;
    };
    int d = toMin(correct) - toMin(current);
    return d / 60 + d % 60 / 15 + d % 15 / 5 + d % 5;
}
};