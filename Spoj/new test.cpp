//IIT2010162
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int n;

void recur(int d[][16],int src,int vis[],int pred[])
{
for(int i=1;i<=n;i++)
{
if(d[src][i]==1&&vis[i]==0)
{
vis[i]=1;
pred[i]=src;
cout<<i<<" \n";
recur(d,i,vis,pred);
}
}
}
int main()
{
ifstream fin;
int i,j,k,src,dest,d[16][16],vis[6]={0},pred[6]={0},count=0;
fin.open("matrix.txt",ios::out);
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
vis[src]=1;
cout<<src<<" \n";
recur(d,src,vis,pred);
getch();
return 0;
}
