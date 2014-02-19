
#include<iostream>
using namespace std;


int main(){
int n,m,i,j,k,c=0,a,b;
cin>>n>>m;
int ar[n+1][n+1];
for(i=0;i<=n;i++)
for(j=0;j<=n;j++)
ar[i][j]=0;
while(m--)
{
cin>>a>>b;
ar[a][b]=1;
ar[b][a]=1;
}
for(i=0;i<=n;i++)
{
for(j=0;j<=n;j++)
{
if(ar[i][j]==1)
{
for(k=0;k<=n;k++)
{
if(ar[j][k]==1 && ar[k][i]==1)
{
// cout<<j<<" "<<k<<endl;
ar[j][k]=0;
ar[k][j]=0;
c++;
}
}
}
}
}
if((n-c)%2==0)
c=c;
else
c++;
cout<<c;
//system("pause");
return 0;
}
