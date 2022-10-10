class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int currMin = INT_MAX;
        int ans = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < currMin) {
                currMin = prices[i];
            }
            
            ans = max(ans, prices[i]-currMin);
        }
        return ans;
    }
};