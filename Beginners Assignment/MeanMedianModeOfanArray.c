#include <stdio.h>
int sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
int mode(int arr[],int n){
    int count,z=0,val=0;
    for(int i=0;i<n;i++){
    count=0;
    for(int j=0;j<n;j++){
        if(arr[i]==arr[j])
            count++;
    }
    if(count>z){
        z=count;
        val=arr[i];
    }
    }
    return val;
}
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    sort(arr,n);
    int median=(n+1)/2-1;
    printf("Mean : %d\n",sum/n);
    printf("Median : %d\n",arr[median]);
    printf("Mode : %d",mode(arr,n));
}