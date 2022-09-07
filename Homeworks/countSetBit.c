#include<stdio.h>
int countSetBit(int n){
     int count=0;
     while(n){
         count+=n&1;
         n>>=1;
     }
     return count;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",countSetBit(n));
}