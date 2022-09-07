#include<stdio.h>
char toggle(char ch){
    return ch^(1<<5);
}
int main(){
    char ch;
    scanf("%c",&ch);
    printf("%c",tolower(ch));
    printf("%c",toupper(ch));
    printf("%c",toggle(ch));
}

