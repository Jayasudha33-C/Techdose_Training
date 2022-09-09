#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int res=sqrt(n);
    if(res*res==n){
        printf("%d is a Perfect Square",n);
    }
    else{
        printf("%d is not a Perfect Square",n);
    }
}