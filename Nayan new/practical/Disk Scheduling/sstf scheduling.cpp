#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n;
cout<<"enter the total pages ";
cin>>n;
int time=0,a[n],pos=0,i,h,small=0,chk=0;
for(i=0;i<n;i++)
cin>>a[i];
cout<<"enter the head pointer ";
cin>>h;
for(int j=0;j<n;j++)
{
small=a[0]-h;
pos=0;
if(small<0)
small=-small;
for(i=0;i<n-j;i++)
{
 chk=a[i]-h;
 if(chk<0)
 chk=-chk;
 if(chk<small)
 {
 small=chk;
 pos=i;
 }
}
 time+=small;
 h=a[pos];
 cout<<h<<" ";
 swap(a[i-1],a[pos]);
}
cout<<"\n"<<time;
getch();
return 0;
}
