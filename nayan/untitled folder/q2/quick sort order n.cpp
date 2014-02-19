#include<iostream>
using namespace std;
int k,a[10];
void swp(int &x,int &y)
{
int temp;
temp=x;
x=y;
y=temp;
}
int part(int p,int q)
{
 int x=a[q],i=p;
 for(int j=p;j<=q;j++)
 {
 if(a[j]<=x)
 {
  swp(a[i],a[j]);
  i++;
}
}
swp(a[i],a[q]);
return(i);
}
void qs(int p,int q)
{
 if(p<q)
 {
  int r=part(p,q);//if(r<k)
  part(r+1,q);// else if(r>k)
  part(p,r-1);// else//  { //  cout<<a[k]; // return ; // }
  }
}
int main()
{
 int i;
 for(i=0;i<10;i++)
 cin>>a[i];
// cin>>k;
 qs(0,9);
 //cout<<a[k]<<"\n";
 for(i=0;i<10;i++)
 cout<<a[i];
 system("pause");
 return 0;
}
