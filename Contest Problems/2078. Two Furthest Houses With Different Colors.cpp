class Solution {
public:
    int maxDistance(vector<int>& arr) {
        int start=0;
        int end=arr.size()-1;
        int ans=0;
        while(start<end)
        {
            if(arr[start]==arr[end])
            {
                end--;
            }
            else
            {
                ans=max(ans,abs(end-start));
                start++;
            }
        }
        start=0;
        end=arr.size()-1;
        while(start<end)
        {
            if(arr[start]==arr[end])
            {
                start++;
            }
            else
            {
                ans=max(ans,abs(end-start));
                end--;
            }
        }
        return ans;
    }
};