#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
void dfs(int d[][6],int src,int color[],int pred[])
{
for(int i=1;i<=5;i++)
{
if(d[src][i]==1&&color[i]==0)
{
color[i]=1;
pred[i]=src;
cout<<i<<" "<<pred[i]<<" \n";
dfs(d,i,color,pred);
}
/*else if(d[src][i]==1&&color[i]!=0&&pred[src]!=i)
{
int a=src;
cout<<src<<" "<<pred[a]<<" "<<pred[pred[a]]<<" \n";
/*
while(a!=i)
{
cout<<pred[a]<<" ";
a=pred[a];
Sleep(500);
}*/

//cout<<src<<" "<<i<<" cycle exist\n";
}
}

int main()
{
int i,j,k,src,dest,d[6][6],color[6]={0},pred[6]={0},count=0;
for(i=1;i<6;i++)
for(j=1;j<6;j++)
d[i][j]=2000;
d[1][2]=1;d[1][3]=1;d[2][1]=1;d[2][4]=1;
d[3][1]=1;d[3][4]=1;d[3][5]=1;
d[4][2]=1;d[4][3]=1;d[4][5]=1;
d[5][4]=1;
cout<<" enter source ";
cin>>src;
color[src]=1;
cout<<src<<" \n";
dfs(d,src,color,pred);
getch();
return 0;
}
