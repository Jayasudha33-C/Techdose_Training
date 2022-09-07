#include<stdio.h>
int unsetIthBit(int n,int x){
    return n&(~(1<<x));
}
int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    printf("%d",unsetIthBit(n,x));
}