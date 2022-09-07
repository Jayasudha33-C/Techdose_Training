#include<stdio.h>
void print(int arr[],int n,int r,int j,int c[],int i){
    if(j==r){
        for(int j=0;j<r;j++)
        printf("%d ",c[j]);
       printf("\n");
       return;
    }
    if(i>=n)
    return ;
   c[j]=arr[i];
   print(arr,n,r,j+1,c,i+1);
   print(arr,n,r,j,c,i+1);
   
}
void combination(int arr[],int n,int r){
    int c[r];
    print(arr,n,r,0,c,0);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int r;
    int c[r];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
      combination(arr,n,r);
}