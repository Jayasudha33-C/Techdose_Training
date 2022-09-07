#include<stdio.h>
int setIthBit(int n,int x){
    return (1<<x)|n;
}
int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    printf("%d",setIthBit(n,x));
}