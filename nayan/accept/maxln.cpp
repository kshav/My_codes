#include<iostream>
using namespace std;
int main()
{
int t,i=1;
long long int r;
double d;
cin>>t;

while(t>0)
{
t--;
cin>>r;
d=4*r*r;
cout<<"Case "<<i<<": "<<d<<".25\n";
i++;
}
}
