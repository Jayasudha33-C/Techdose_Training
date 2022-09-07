#include<stdio.h>
int rightMostOne(int n){
    return n &(-n+1);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",rightMostOne(n));
}