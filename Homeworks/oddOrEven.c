#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf(((n&1)==0)?"Even":"Odd");
}