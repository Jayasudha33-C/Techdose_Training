#include <stdio.h>
#include<math.h>
int main()
{
   char str[100];
   scanf("%s",str);
   int ind;
   int charCount[26]={0};
   for(int ind=0;str[ind]!='\0';ind++){
       charCount[str[ind]-'a']++;
   }
   for(int ind=0;ind<26;ind++){
       if(charCount[ind]>0){
           printf("%c %d\n",(char)ind+'a',charCount[ind]);
       }
   }
}