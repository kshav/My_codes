#include<iostream>
#include<list>
using namespace std;
int main()
{
 int t,q=0;
 scanf("%d",&t);
 printf("\n");
 while(q<t)
 {
 q++;
list<int>a,b;
int m,n,i,p;
scanf("%d",&n);
cin>>m;
for(i=0;i<n;i++)
{
scanf("%d",&p);
a.push_back(p);
}
for(i=0;i<m;i++)
{
scanf("%d",&p);
b.push_back(p);
}
a.sort();
a.reverse();
b.sort();
b.reverse();
list<int>::iterator pos,ps;
for(pos=a.begin(),ps=b.begin();pos!=a.end()&&ps!=b.end();)
{
 if(*pos>=*ps)
 ps++;
 else
 pos++;
}
if(pos!=a.end())
printf("Godzilla\n");
else
printf("MechaGodzilla\n");
}
return 0;
}

