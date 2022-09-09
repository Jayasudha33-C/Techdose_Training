#include <stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int z=(a+b+c)/2;
    printf("%.2f",sqrt(z*(z-a)*(z-b)*(z-c)));
}