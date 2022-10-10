class Solution {
public:
void nextPermutation(vector<int>& nums) {
    int n1=-1,n2=0; 
    for(int i=nums.size()-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            n1=i;
            break;
        }}
        if(n1==-1){
        sort(nums.begin(),nums.end());
            return;
    }
          for(int j=nums.size()-1;j>=0;j--){
                 if(nums[n1]<nums[j]){
                  n2=j;
                     break;
    }}
    swap(nums[n1],nums[n2]); 
    sort((nums.begin()+n1+1),nums.end());
}
};