#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int n=strlen(str),count=0;
    for(int i=0;i<n;i++){
        if(str[i]!=str[n-i-1]){
            count=1;
            break;
        }}
    if(count==0){
        printf("%s is a Palindrome",str);
    }
    else{
        printf("%s is not a Palindrome",str);
    }
}