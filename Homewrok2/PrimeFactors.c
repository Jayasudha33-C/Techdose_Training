#include <stdio.h>
int isPrime(int z){
    int flag;
    for(int i=2;i<=z; i++)
    {
        if(z%i==0)
        {
            flag=1;
            for(int j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                printf("%d ",i);
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    isPrime(n);
}