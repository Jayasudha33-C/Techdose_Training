#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++){
      k=arr[i];
      int j=i-1;
      while(k<arr[j] && j>=0){
          arr[j+1]=arr[j];
          --j;
      }
      arr[j+1]=k;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
/*Time Complexity
Best case: O(n)
Worst case: O(n^2)
*/