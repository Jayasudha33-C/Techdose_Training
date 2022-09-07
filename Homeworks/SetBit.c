#include<stdio.h>
int SetBit(int n,int x){
    return (n&(1<<(x-1)))!=0;
}
int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    printf("%d %d",n,x);
}