#include <stdio.h>
 int fact(int g)
{
    int f=1,i;
    if (g==0)
    {
        return(f);
    }
    else
    {
        for (i=1;i<=g;i++)
	{
            f=f*i;
	}}
    return(f);
}
 
void main()
{
    int n, r, ncr;
    scanf("%d%d", &n, &r);
    ncr = fact(n)/(fact(r)*fact(n - r));
    printf("%d",ncr);
}
 