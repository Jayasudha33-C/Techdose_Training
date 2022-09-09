
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int mat[100][100];
    for(int i=0;i<n;i++){
          for(int j=0;j<n-i-1;j++){
              printf(" ");
          }
          for(int j=0;j<=i;j++){
              if(i==0 || j==i)
                 mat[i][j]=1;
              else 
                 mat[i][j]=mat[i-1][j-1]+mat[i-1][j];
            printf("%d ",mat[i][j]);
          }
        printf("\n");
    }
}
