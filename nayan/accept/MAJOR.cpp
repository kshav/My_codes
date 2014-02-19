#include<iostream>
using namespace std;
int main()
{
 int test;
 scanf("%d",&test);
 while(test>0)
 {
 test--;
 int n,i,a[2000]={0},count=0,num=0,c;
 cin>>n;
 for(i=0;i<n;i++)
 {
// cout<<i;
// cin>>c;
 scanf("%d",&c);
 a[c+1000]++;
 if(a[c+1000]>count)
 {
  count=a[c+1000];
  num=c;
 }
 }
 if(count>n/2)
 cout<<"YES "<<num<<"\n";
 else
 cout<<"NO\n";
 }
return 0;
}
