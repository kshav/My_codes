#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int i,j,k,d[6][6],src,dest,visit[6]={0},dist[6],vertex[6]={0};
for(i=1;i<=5;i++)
dist[i]=2000;
for(i=1;i<6;i++)
for(j=1;j<6;j++)
d[i][j]=2000;
d[1][2]=3;d[1][3]=10;d[2][1]=3;d[2][4]=5;
d[3][1]=10;d[3][4]=6;d[3][5]=15;
d[4][2]=5;d[4][3]=6;d[4][5]=4;
d[5][4]=4;
while(1)
{
cout<<"enter source ";
cin>>src;
int se=src;
cout<<"\nenter destination ";
cin>> dest;
int count=1;
dist[src]=0;
while(count<=5)
{
count++;
for(int i=1;i<=5;i++)
if(src!=i&&d[src][i]!=2000)
{
if(dist[src]+d[src][i]<=dist[i]&&visit[i]!=1)
{
dist[i]=dist[src]+d[src][i];
vertex[i]=src;
}
}
visit[src]=1;
int small;
for(j=1;j<=5;j++)
if(visit[j]==0)
{
small=j;
break;
}
for(j=j+1;j<=5;j++)
{
if(dist[j]<=dist[small]&&visit[j]==0)
{
small=j;}
}
src=small;
}
cout<<dest<<"\n";
while(dest!=se)
{
cout<<vertex[dest]<<"\n";
dest=vertex[dest];
}
}
getch();
return 0;
}
