#include<iostream>
using namespace std;
int main()
{
int test,a[3],d1,d2;
cin>>test;
while(test--)
{
cin>>a[0];
cin>>a[1];
cin>>a[2];
d1=a[1]-a[0];
d2=a[2]-a[1];
if(d1==d2)
{
cout<<a[0]+(3*d1);
}
else
{
cout<<a[2]*(a[1]/a[0]);
}
cout<<"\n";
}
return 0;
}

