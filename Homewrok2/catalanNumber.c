#include <stdio.h>
unsigned long int catalan(unsigned int z) {
     unsigned long int ans= 0;
   if (z<=1) {
      return 1;
}
else{
   for (int i=0; i<z; i++)
      ans+= catalan(i)*catalan(z-i-1);
}
   return ans;
}
int main() {
   int n;
   scanf("%d",&n);
   printf("%ld",catalan(n));
   return 0;
}

