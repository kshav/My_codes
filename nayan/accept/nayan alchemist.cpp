#include<iostream>
using namespace std;
void comp(double x,double y)
{
double pre=0.00001;
if(((x-pre)<y)&&((x+pre)>y))
cout<<"Y\n";
else 
cout<<"N\n";
}
int main()
{
double i,w,y=1000.0/37.0;
cin>>i;
cin>>w;
while(i!=-1)
{
i=i/w;
comp(i,y);
cin>>i;
cin>>w;
}
return 0;
}
