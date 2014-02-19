#include<iostream>
#include<conio.h>
using namespace std;
void floyd(int d[][6],int s[][6])
{
for(int k=1;k<6;k++)
{
for(int i=1;i<6;i++)
{
for(int j=1;j<6;j++)
{
if(i!=j&&j!=k&&i!=k)
{
if(d[i][k]+d[k][j]<=d[i][j])
{
d[i][j]=d[i][k]+d[k][j];
s[i][j]=k;
}
}
}
}
}
}
void fnd(int s[][6],int i,int j)
{
if(s[i][j]!=j)
{
fnd(s,i,s[i][j]);
cout<<" "<<s[i][j];
fnd(s,s[i][j],j);
}}

int main()
{
int s[6][6]={0},i,j,k,d[6][6];
for(i=1;i<6;i++)
for(j=1;j<6;j++)
d[i][j]=2000;
d[1][2]=3;d[1][3]=10;d[2][1]=3;d[2][4]=5;
d[3][1]=10;d[3][4]=6;d[3][5]=15;
d[4][2]=5;d[4][3]=6;d[4][5]=4;
d[5][4]=4;
for(i=1;i<6;i++)
for(j=1;j<6;j++)
if(i!=j)
s[j][i]=i;
floyd(d,s);
for(i=1;i<6;i++)
{
for(j=1;j<6;j++)
cout<<s[i][j]<<" ";
cout<<"\n";
}
while(1)
{
cout<<"enter source ";
cin>>i;
cout<<"\nenter destination ";
cin>>j;
cout<<i<<" ";
fnd(s,i,j);
cout<<" "<<j<<"\n";
}
getch();
return 0;
}
