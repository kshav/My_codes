#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
void dfs(int d[][16],int n,int src,int color[],int pred[])
{
for(int i=1;i<=n;i++)
{
if(d[src][i]==1&&color[i]==0)
{
color[i]=1;
pred[i]=src;
cout<<i<<" \n";
dfs(d,n,i,color,pred);
}
}
}
int main()
{
ifstream fin;
int n;
int i,j,k,src,dest,d[16][16],color[6]={0},pred[6]={0},count=0;
fin.open("ram.txt",ios::out);
cout<<"enter the matrix order ";
cin>>n;
int a;
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
fin>>a;
d[i][j]=a;
}
}
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++){
cout<<d[i][j]<<" ";}
cout<<"\n";
}
cout<<" enter source ";
cin>>src;
color[src]=1;
cout<<src<<" \n";
dfs(d,n,src,color,pred);
getch();
return 0;
}
