#include<iostream>
using namespace std;
int main()
{
while(1)
{
int a[3],d1,d2;
cin>>a[0];
cin>>a[1];
cin>>a[2];
if(a[0]==a[1]&&a[1]==a[2]&&a[1]==0)
break;
d1=a[1]-a[0];
d2=a[2]-a[1];
if(d1==d2)
{
cout<<"AP ";
cout<<a[0]+(3*d1);
}
else
{
cout<<"GP ";
cout<<a[2]*(a[1]/a[0]);
}
cout<<"\n";
}
return 0;
}
