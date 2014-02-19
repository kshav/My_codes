#include<iostream>
#include<conio.h>
using namespace std;
int s[7],v[6],q[2][12],m=-1,a[7][7];
void prim()
{
 int f,l,pos,x,y,t,j=0,k=5;
 s[0]=0;
 f=s[0];
 l=v[0];
 pos=0;
while(j<6)
{ 
          f=s[0];
 l=v[0];
 pos=0;
 for(y=0;y<=j;y++)
  {
   for(x=0;x<=k;x++)
    {
     if(a[(v[x])][(s[y])]<=a[l][f])
      {
       f=s[y];
       l=v[x];
       pos=x;
      }
     }
   }
   m+=1;
  q[m][0]=f;
  q[m][1]=l;
  s[++j]=v[pos];
  for(t=pos;t<k;t++)
  v[t]=v[t+1];
  k--;
}; 
}
int main()
{
 int i=0,j=0;
 for(i=0;i<12;i++)
 for(j=0;j<2;j++)
 q[i][j]=-1;
 for(i=0;i<7;i++)
 s[i]=-1;
 for(i=0;i<6;i++)
 v[i]=i+1;
 for(i=0;i<7;i++)
 for(j=0;j<7;j++)
 a[i][j]=3000;
 a[0][1]=a[1][0]=4;
 a[0][2]=a[2][0]=8;
 a[1][2]=a[2][1]=9;
 a[1][3]=a[3][1]=8;
 a[1][4]=a[4][1]=10;
 a[2][3]=a[3][2]=2;
 a[2][5]=a[5][2]=1;
 a[3][4]=a[4][3]=7;
 a[3][5]=a[5][3]=9;
 a[4][5]=a[5][4]=5;
 a[4][6]=a[6][4]=6;
 a[5][6]=a[6][5]=2;
 for(i=0;i<7;i++)
 {
 for(j=0;j<7;j++)
 cout<<a[i][j]<<" ";
 cout<<"\n";
 }
prim();
 for(i=0;i<=m;i++)
 {
  for(j=0;j<2;j++)
  cout<<q[i][j]<<"   ";
  cout<<"\n";
 }
 getch();
 return 0;
}

