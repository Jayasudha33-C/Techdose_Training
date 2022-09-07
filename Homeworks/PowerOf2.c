#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf(n>0 &&(n&(n-1))==0?"True":"False");
}