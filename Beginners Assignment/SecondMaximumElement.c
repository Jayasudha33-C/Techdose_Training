#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    int smax=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }
      if(arr[i]<max && arr[i]>smax){
            smax=arr[i];
        }
    }
    printf("%d %d",max,smax);
    return 0;
}
//Time Complexity: O(N)
