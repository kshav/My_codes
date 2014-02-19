#include<iostream>
#include<list>
using namespace std;
int main()
{
while(1)
{
 list<int>a;
 int s=0,n,m;
 cin>>n;
 if(n==-1)
 break;
 for(int i=0;i<n;i++)
 {
 cin>>m;
 s+=m;
 a.push_back(m);
 }
 a.sort();
 if(s%n==0)
 {
  a.reverse();
  list<int>::iterator v;
  m=s/n;
  s=0;
  for(v=a.begin();v!=a.end();v++)
  {
  if(*v>m)
  s=s+(*v-m);
  }
  cout<<s;
 }
 else
 cout<<"-1";
 cout<<"\n";
}

return 0;
}
