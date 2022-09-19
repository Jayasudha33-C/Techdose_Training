#include<stdio.h>
void merge(int arr[],int p,int q,int r){
  int n1=q-p+1;
  int n2=r-q;
  int barr[n1],carr[n2];
  for (int i =0; i<n1;i++)
    barr[i]=arr[p+i];
  for (int j = 0; j < n2; j++)
    carr[j] = arr[q+1+j];
  int i=0,j=0,k=p;
  while (i < n1 && j < n2) {
    if (barr[i]<=carr[j]) {
      arr[k]=barr[i];
      i++;
    }
    else{
      arr[k]=carr[j];
      j++;
    }
    k++;
  }
while (i<n1){
    arr[k]=barr[i];
    i++;
    k++;
  }
while (j<n2){
    arr[k]=carr[j];
    j++;
    k++;
  }
}
int mergeSort(int arr[],int i,int j){
    int k;
    if(i<j){
        k=i+(j-i)/2;
        mergeSort(arr,i,k);
        mergeSort(arr,k+1,j);
        merge(arr,i,k,j);
    }
}
int main()
{
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
/* Time Complexity
Best case : O(n log n)
Average case : O( n log n)
Worst case : O(n log n)