#include<iostream>
#include<conio.h>
using namespace std;
int a[9][9],q[9],v[9];
void dfs()
{
 int small=0,k=-1,i=0;
 v[small]=1;
 while(k>=-1)
 {
 for( i=8;i>=0;i--)
 {
   if((a[small][i]==1)&&(v[i]==0))
    {q[++k]=i;
    v[i]=1;
    }
 }
    cout<<small;
    small=q[k--];
  };
}
 int main()
 {
  int i,j=0;
 for(i=0;i<9;i++)
 for(j=0;j<9;j++)
 a[i][j]=0;
 a[0][1]=a[1][0]=1;
 a[1][2]=a[2][1]=1;
 a[4][3]=a[3][4]=1;
 a[0][4]=a[4][0]=1;
 a[3][5]=a[5][3]=1;
 a[1][3]=a[3][1]=1;
 a[2][6]=a[6][2]=1;
 a[5][8]=a[8][5]=1;
 a[6][8]=a[8][6]=1;
 a[6][7]=a[7][6]=1;
 for(i=0;i<9;i++)
 q[i]=-1;
 for(i=0;i<9;i++)
 v[i]=0;
 dfs();
 getch();
 return 0;
}
