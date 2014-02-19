#include<iostream>
#include<math.h>
using namespace std;
int main()
{
while(1)
{
int t;
double s=0;
cin>>t;
if(t==0)
break;
for(int i=1;i<=t;i++)
 s+=(pow(i,2));
 cout<<s<<"\n";
}
return 0;
}
