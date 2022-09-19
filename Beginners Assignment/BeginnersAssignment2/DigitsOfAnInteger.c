#include <stdio.h>
#include<math.h>
int main()
{
   int n,res;
   scanf("%d",&n);
   while(n!=0){
      res=n%10;
      n/=10;
      printf("%d ",res);
   }
}
