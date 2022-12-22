class NumArray {
public:
    vector<int>accu;
    NumArray(vector<int>& nums) {
        accu.push_back(0);
        for(auto num:nums)
        accu.push_back(accu.back()+num);
    }
    
    int sumRange(int left, int right) {
        return accu[right+1]-accu[left];
    }
};