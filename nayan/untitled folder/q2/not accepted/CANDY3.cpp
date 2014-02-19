#include<iostream>
using namespace std;
int main()
{
   int t,q=0;
   scanf("%d",&t);
   printf("\n");
   while(q<t)
   {
             q++;
             long long m,s=0 ;
    int k,i;
    cin>>m;
    i=1;
    while(i<=m)
    {
     scanf("%d",&k);
     s+=(k%(m));
     s=s%(m);
     i++;
    }
  if(s==0)
  printf("YES\n\n");
  else 
  printf("NO\n\n");
 }
    return 0;
}
     
