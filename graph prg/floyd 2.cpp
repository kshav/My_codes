#include<iostream>
#include<conio.h>
using namespace std;
int d[5][5],s[5][5];
void floyd()
{
     int k=0,v=0,i=0,j=0;
     for(k=0;k<5;k++)
     {
     for(i=0;i<5;i++)
     {
     for(j=0;j<5;j++)
     {
     if((i!=j)&&(j!=k)&&(i!=k))
     {
       v=d[i][k]+d[k][j];
       if(v<=d[i][j])
       {
       d[i][j]=v;
       s[i][j]=k;
       }
     }
     }
     }
     }
}
void dis(int i,int j)
{
 if(s[i][j]!=j)
 {
  dis(i,s[i][j]);
  cout<<" "<<s[i][j];
  dis(s[i][j],j);
 }
}
int main()
{
 int i,j,p,q;
 for(i=0;i<5;i++)
 for(j=0;j<5;j++)
 d[i][j]=300;
 d[0][1]=3;d[0][2]=10;d[1][0]=3;d[1][3]=5;d[2][0]=10;d[2][3]=6;d[2][4]=15;d[3][1]=5;d[3][2]=6;d[3][4]=4;d[4][3]=4;
 for(i=0;i<5;i++)
 {
 for(j=0;j<5;j++)
 if(i==j);
 else
 s[i][j]=j;
 }
 floyd();
 for(i=0;i<5;i++)
 {
 for(j=0;j<5;j++)
 cout<<d[i][j]<<" ";
 cout<<"\n";
 }
 for(i=0;i<5;i++)
 {
 for(j=0;j<5;j++)
 cout<<s[i][j]<<" ";
 cout<<"\n";
 }
 p=0;q=0;
 cout<<"\nenter the source and destination nodes ";
 cin>>p;
 cin>>q;
 cout<<p;
 dis(p,q);
 cout<<" "<<q;
 cout<<" ";
 getch();
 return 0;
}

 
