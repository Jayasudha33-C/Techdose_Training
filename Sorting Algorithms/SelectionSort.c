
#include<stdio.h>
int swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min_index;
    for(int i=0;i<n-1;i++){
        min_index=i;
        for(int j=i+1;j<n;j++)
            if(arr[min_index]>arr[j])
            min_index=j;
        if(min_index!=i){
            swap(&arr[min_index],&arr[i]);
        }}
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
/* Time Complexity 
Best case : O(n^2)
Worst case : O(n^2)
*/