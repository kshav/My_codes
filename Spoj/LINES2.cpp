#include<iostream>
using namespace std;


int main()
{
  long long int i,j,k,y,x,n;
 // scanf("%d%d",&n,&k);
   cin>>n>>k;
int a[n],b[n],c[k];

for(i=0;i<n;i++)
cin>>a[i]>>b[i];
for(i=0;i<k;i++)
cin>>c[i];


for(j=0;j<k;j++)
{ 
  y=0;
  x=c[j];
  for(i=0;i<n;i++)
  { 
    if((x>a[i] && x<b[i]) || x==a[i] || x==b[i])
    y++;
  }
  cout<<y<<"\n";
}
//system("pause");
return 0;
}
