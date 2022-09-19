
#include <stdio.h>
#include<stdlib.h>
int getMax(int a[], int n){  
   int max=a[0];  
   for(int i=1;i<n;i++){  
      if(a[i]>max)  
        max=a[i];
   }  
   return max;  
}  
void radix_sort(int a[],int n){
   int bucket[n][n], bucket_cnt[n];
   int i,r,pass;
   int NOP=1,divisor=1;
   int lar=getMax(a,n);
   while (lar > 0){
      NOP++;
      lar=lar/10;
   }
   for(pass=0;pass<NOP;pass++){
      for(i=0;i<n;i++){
         bucket_cnt[i]=0;
      }
      for (i=0;i<n;i++){
         r=(a[i]/divisor)%10;
         bucket[r][bucket_cnt[r]]=a[i];
         bucket_cnt[r]+=1;
      }
      i=0;
      for (int k=0;k<n;k++){
         for(int j=0;j<bucket_cnt[k];j++){
            a[i]=bucket[k][j];
            i++;
         }
      }
      divisor*=10;
}}
int main (){
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   radix_sort(arr,n);
    for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
   }
}