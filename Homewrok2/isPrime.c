#include <stdio.h>
int main() {
    int n,flag=0;
    scanf("%d",&n);
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            flag=1;
        }
    }
   if(flag==0){
       printf("%d is a Prime Number",n);
   } 
   else{
       printf("%d is not a prime number",n);
   }
}
