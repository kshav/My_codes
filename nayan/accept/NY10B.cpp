#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
int n,no=1;
cin>>n;
while(n>0){
n--;
int b,x,y,e,v1=-1,w1=-1,i,j;
double g=0;
cout<<no<<" ";
cin>>b>>x>>y;
vector<int>v,w;
while(x>0)
{
e=x%b;
v.push_back(e);
v1++;
x=x/b;
}
while(y>0)
{
e=y%b;
w.push_back(e);
w1++;
y=y/b;
}
i=0;j=0;y=0;
while(i<=v1&&j<=w1)
{
 g+=((v[i]+w[j])%b)*pow(b,y);
 y++;
 i++;j++;
}
while(i<=v1)
{
g+=(v[i]*pow(b,y));
y++;i++;
}
while(j<=w1)
{
g+=(w[j]*pow(b,y));
y++;j++;
}
cout<<no++<<" "<<g<<"\n";
}
return 0;
}
