#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
 int t,j=1;
 scanf("%d",&t);
 while(t>0)
 {
 t--;
 int s,i,n,count=0,sum=0,e;
 vector<int>v;
 scanf("%d%d",&s,&n);
 for(i=0;i<n;i++)
 {
  cin>>e;
  v.push_back(e);
 }
  sort(v.begin(),v.end());
 for(i=n-1;i>=0;i--)
 {
  sum+=v[i];
  count++;
  if(sum>=s)
  break;
 }
 if(sum<s) printf("Scenario #%d:\nimpossible\n\n",j++);
 else
 {
 printf("Scenario #%d:\n%d\n\n",j++,count);
 }
}
 return 0;
}
