int singleNumber(int* nums, int numsSize){
      int s=0,i,j,c=0;
    for (i=0; i < 32; i++)
    {
        c=0;
        for (j=0; j < numsSize; j++)
        {
            if (nums[j] & ((uint32_t)1 << i))
            {
                c++;
            }
        }
        
        c = c % 3;
        s = s | ((uint32_t)c << i);
    }

    return s;
    }
