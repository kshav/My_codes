#include<iostream>
using namespace std;

int main()
{
    int i,j,m,n,k,r,s;
    printf("Enter the size of matrix 1: ");
    scanf("%d%d",&m,&n);
    int mat1[m][n];
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
    scanf("%d",&mat1[i][j]);
    printf("Enter the size of matrix 2: ");
    scanf("%d%d",&r,&s);
    int  mat2[r][s];
    for(int i=0;i<r;i++)
    for(int j=0;j<s;j++)
    scanf("%d",&mat2[i][j]);
    int mat3[m][s];
  //  for(int i=0;i<m;i++)
   // for(int j=0;j<s;j++)
  //  mat3[i][j]=0;
    if(n!=r)
    printf("Matrix multiplication is not possible\n");
    else
    {
         for(int i=0;i<m;i++)
         {
                 for(int k=0;k<s;k++)
                 {
                         mat3[i][k]=0;
                         for(j=0;j<n;j++)
                         mat3[i][k]+=mat1[i][j]*mat2[j][k];
                 }
         }
    }
     printf("Matrix\n\n");
     for(int i=0;i<m;i++)
     {for(int j=0;j<s;j++)
      printf("%d ",mat3[i][j]);
      printf("\n");
     }
     system("pause");
     return 0;
}
