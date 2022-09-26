int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *return_arr=(int*)malloc(2*sizeof(int));
     for(int i=0;i<numsSize;i++){
         for(int j=i+1;j<numsSize;j++){
             if(nums[i]+nums[j]==target)
                 *returnSize=2;
                  return_arr[0]=i;
                  return_arr[1]=j;
                   return return_arr;
         }
     }
    *returnSize=0;
    free(return_arr);
    return NULL;
}