#include<iostream>
#include<conio.h>
using namespace std;
char clr[7];
int pre[7],d[7],a[7][7],q[7];
void bfs()
{
 int x=0,i=0,k=-1,j=-1,flag=1,w=0;
 clr[x]='g';
while(flag==1)
 {
  for(i=0;i<7;i++)
  {
   if(a[x][i]!=0)
    {
     if(clr[i]=='w')
      {
       clr[i]='g';
       d[i]=d[x]+1;
       pre[i]=x;
       q[++k]=i;
      }
    }
  }
  clr[x]='b';
  x=q[++j];
  flag=0;
  for(w=0;(w<7)&&(flag==0);w++)
  {
   if(clr[w]!='b')
   flag=1;
   else
   flag=0;
  }
 };
}
int main()
{
 int i=0,j=0;
 for(i=0;i<7;i++)
  clr[i]='w';
 for(i=0;i<7;i++)
  pre[i]=-1;
 for(i=0;i<7;i++)
   d[i]=0;
   for(i=0;i<7;i++)
   q[i]=0;
   for(i=0;i<7;i++)
   for(j=0;j<7;j++)
   a[i][j]=0;
 a[0][2]=a[0][5]=a[1][2]=a[1][5]=a[2][0]=a[2][1]=a[2][3]=a[2][6]=a[3][2]=a[3][4]=a[4][5]=a[4][3]=a[5][0]=a[5][1]=a[5][6]=a[6][2]=a[6][5]=a[5][4]=1;
   for(i=0;i<7;i++)
   {
   for(j=0;j<7;j++)
   cout<<a[i][j]<<" ";
   cout<<"\n";
   }
  bfs();
  for(i=0;i<7;i++)
  cout<<clr[i]<<" ";
  cout<<"\n";
 for(i=0;i<7;i++)
  cout<<pre[i]<<" ";
  cout<<"\n";
 for(i=0;i<7;i++)
   cout<<d[i]<<" ";
   cout<<"\n";
  
  getch();
  return 0;
}
  
