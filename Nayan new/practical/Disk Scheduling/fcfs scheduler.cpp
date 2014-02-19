#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n;
cout<<"Enter the Total Pages from 0-200 ";
cin>>n;
int time=0,a[n],i,h,small;
for(i=0;i<n;i++)
cin>>a[i];
cout<<"Enter the Head Pointer ";
cin>>h;
for(int j=0;j<n;j++)
{
small=a[j]-h;
if(small<0)
small=-small;
time+=small;
h=a[j];
cout<<a[j]<<" ";
}
cout<<"\n"<<time;
getch();
return 0;
}
