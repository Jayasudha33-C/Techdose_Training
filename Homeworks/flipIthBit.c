#include<stdio.h>
int flipIthBit(int n,int x){
    return n^(1<<(x-1));
}
int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    printf("%d",flipIthBit(n,x));
}