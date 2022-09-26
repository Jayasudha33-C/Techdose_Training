class Solution {
public:  
    long long merge(vector<int> &arr , int left , int mid , int right , int temp[]){
        int i=left,j=mid,k=left;
        long long inv=0;
        while(i < mid && j <=right ){
            if((long long)arr[i] > 2*(long long)arr[j]){
                inv += mid - i;
                j++;
            }
            else 
                i++;
        }
        i = left ; j = mid;
        while(i < mid && j <= right){
            if(arr[i] <= arr[j])
                temp[k++] = arr[i++];
            else
                temp[k++] = arr[j++];
        }
        while(i < mid)
            temp[k++] = arr[i++];
        while(j <= right)
            temp[k++] = arr[j++];
        for(; left <= right ; left++)
            arr[left] = temp[left];
        return inv;
    } 
   int solve(vector<int> &arr, int left, int right,int temp[]){
        if(left == right)
            return 0;
        long long inv  = 0;
        int mid = left + (right - left)/2;      
        inv+=solve(arr , left , mid , temp);         
        inv+=solve(arr , mid + 1 , right , temp);   
        inv+=merge(arr , left , mid + 1 , right , temp);    
        return inv;
    }
long long reversePairs(vector<int>& nums)
{
    int n = nums.size();
   if(n == 0 )
        return 0;
    int temp[n];
    return solve(nums , 0 , n - 1 , temp);
    }
};