#include <stdio.h>
int gcd(int a,int b){
    return a==0?b:gcd(b%a,a);
}
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",gcd(a,b));
}
