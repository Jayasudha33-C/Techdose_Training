#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char b[n+1];
    char onescomplt[n+1];
    char twoscomplt[n+1];
    scanf("%s",b);
    int c=1;
    for(int i=0;i<n;i++){
        if(b[i]=='0'){
            onescomplt[i]='1';
        }
        else if(b[i]=='1'){
            onescomplt[i]='0';
        }
    }
    onescomplt[n]='\0';
    printf("%s\n",onescomplt);
    for(int i=n-1;i>=0;i--){
        if(onescomplt[i]=='1' && c==1){
            twoscomplt[i]='0';
        }
        else if(onescomplt[i]=='0' && c==1){
            twoscomplt[i]='1';
            c=0;
        }
        else{
            twoscomplt[i]=onescomplt[i];
        }
    }
    twoscomplt[n]='\0';
    printf("%s",twoscomplt);
    return 0;
}