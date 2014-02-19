#include<iostream>
using namespace std;
int main()
{
while(1)
{
           
 float  a,s=0,i=2;
 cin>>a;
 if(a==0)
 break;
 while(1)
 {
 s=s+(1/i);
 i++;
 if(s>=a)
 break;
 }
 cout<<i-2<<" card(s)"<<"\n";
}
 return 0;
}
