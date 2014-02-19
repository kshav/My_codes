#include<iostream>
#include<conio.h>
using namespace std;
struct stud
{
 int a;
 int b;
 int c;
 int p;
};
int main()
{
 int n,i;
 cout<<"enter how many resources you want";
 cin>>n;
 stud q[n],w[n],e[n],x;
 int d[n];
 for(i=0;i<n;i++)
 {
  cout<<"ENTER THE REQUIREMENTS FOR PROCESS "<<i+1;
  cout<<"\nenter the value of A ";
  cin>>q[i].a;
  cout<<"\nenter the value of B ";cin>>q[i].b;
  cout<<"\nenter the value of C ";cin>>q[i].c;
 }
 for(i=0;i<n;i++)
 {
  cout<<"ENTER THE REQUIREMENTS FOR THE PROCESS "<<i+1;
  cout<<"\nenter the value of A ";
  cin>>w[i].a;
  cout<<"\nenter the value of B ";cin>>w[i].b;
  cout<<"\nenter the value of C ";cin>>w[i].c;
 }
  for(i=0;i<n;i++)
  {
   e[i].a=w[i].a-q[i].a;
   e[i].b=w[i].b-q[i].b;
   e[i].c=w[i].c-q[i].c;
   e[i].p=0;
  }
  cout<<"enter the available resources ";
  cout<<"\nenter the value of A ";cin>>x.a;
  cout<<"\nenter the value of B ";cin>>x.b;
  cout<<"\nenter the value of C ";cin>>x.c;
 
  int k=-1,j=0;
  i=0;
  while(i<n)
 {
   for( j=0;j<n;j++)
   {
    if((e[j].a<=x.a)&&(e[j].b<=x.b)&&(e[j].c<=x.c)&&(e[j].p==0))
    {
      k++;
      d[k]=j;
      e[j].p=1;
      x.a=x.a+q[j].a;
      x.b=x.b+q[j].b;
      x.c=x.c+q[j].c;
      break;
    }
  } 
  i++;
  }
  for(i=0;i<=k;i++)
  cout<<"p"<<d[i]<<"\n";
  getch();
 return 0;
}
 
  
