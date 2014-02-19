#include<iostream>
#include<list>
using namespace std;
int main()
{
int t,q=0;
cin>>t;
while(q<t)
{
          q++;
list<int>a,b;
int n,i=0,m,s=0;
cin>>n;
for(;i<n;i++)
{
cin>>m;
a.push_back(m);
}
a.sort();
for(i=0;i<n;i++)
{
cin>>m;
b.push_back(m);
}
b.sort();
list<int>::iterator pos,ps;
pos=a.begin();
ps=b.begin();
while(pos!=a.end())
{
 s=s+*pos**ps;
 pos++;
 ps++;
};
cout<<s;
};
system("pause");
return 0;
}
