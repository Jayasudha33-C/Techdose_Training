class Solution {
public:
   int shortestSubarray(vector<int>& nums, int k) {
	if(nums.size() == 0) return -1;
	if(nums[0] == k) return 1;
	presum.push_back(nums[0]);
    int i = 1;
    for(; i < nums.size(); ++i){
        presum.push_back(presum[i-1] + nums[i]);
        if(presum[i] >= k){
            ans = i + 1;
            break;
        }
    }
    for(int j = i + 1; j < nums.size(); ++j){
        presum.push_back(presum[j-1] + nums[j]);
    }
    dc.push_back(0);
    for(int j = 1; j < presum.size(); ++j){
     while(!dc.empty() && presum[j] - presum[dc.back()] >= k){
            ans = min(ans, j - dc.back());
            dc.pop_back();
        }
        while(!dc.empty() && presum[j] <= presum[dc.front()]){
            dc.pop_front();
        }
        dc.push_front(j);
    }
    if(ans == INT_MAX) return -1;
    return ans;
}
	vector<long long> presum;
	deque<int> dc; 
	int ans = INT_MAX;      
};