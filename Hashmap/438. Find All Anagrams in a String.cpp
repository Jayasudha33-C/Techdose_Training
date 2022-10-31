class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> output;
        if (s.size() < p.size())  return output;
        vector<int> counter(26);
        for (const auto& ch : p) {
            ++counter[ch - 'a'];
        }
        for (int beg = 0, end = 0; end < s.size(); ++end) {
            --counter[s[end] - 'a'];
            while (beg <= end && counter[s[end] - 'a'] < 0) {
                ++counter[s[beg++] - 'a'];
            }
            if (end - beg + 1 == p.size()) {
                output.emplace_back(beg);
            }
        }
        return output;
    }
};