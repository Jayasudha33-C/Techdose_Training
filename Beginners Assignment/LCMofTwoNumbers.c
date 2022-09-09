
#include <stdio.h>
#include<math.h>
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int lcm(int a,int b,int value){
    int res=abs((a*b)/value);
    return res;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int gcdvalue=gcd(a,b);
    printf("%d",lcm(a,b,gcdvalue));
}