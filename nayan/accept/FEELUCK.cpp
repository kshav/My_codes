#include<iostream>
using namespace std;
int main()
{
 int t,k=1;
 scanf("%d\n",&t);
 while(t--)
 {
  int i,l=0,b[10];
  string a[10];
  for(i=0;i<10;i++)
  {
  cin>>a[i];
  cin>>b[i];
  if(b[i]>l)
  l=b[i];
  }
  cout<<"Case #"<<k++<<":"<<"\n";
  for(i=0;i<10;i++)
  {
  if(b[i]==l)
  cout<<a[i]<<"\n";
  }
 }
 return 0;
}
