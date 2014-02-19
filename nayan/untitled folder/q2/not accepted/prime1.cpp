#include<iostream>
using namespace std;
int main()
{
 int m,n,flag,i,s;
 scanf("%d",&m);
 cin>>n;
 for(;m<=n;m++)
 {
 flag=0;
 i=2;
 s=m/i;
 for(;i<=s+1;i++)
 {
  if(m%i==0&&m!=i)
  flag=1;
  s=m/i+1;
}
if(flag==0)
cout<<m<<"\n";
}
 system("pause");
 return 0;
} 
