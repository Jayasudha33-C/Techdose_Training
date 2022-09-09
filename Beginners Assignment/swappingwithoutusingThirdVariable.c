#include<stdio.h>
#include<string.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d %d",a,b);
}
  