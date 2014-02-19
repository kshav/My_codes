#include<iostream>
using namespace std;

int main()
{
    int n,t=0,a,b,k,flag=0,l1,l2,c,d;
    vetcor<int> coll1,coll2;
    scanf("%d",&n);
    while(t!=n)
    {
          scanf("%d",&a);
          scanf("%d",&b);
          while(a!=0)
          {
                  k=a%10;
                  if(flag==0 && k!=0)
                  {
                        coll1.push_back(k);
                        flag=1;
                  }
                  if(flag==1)
                  coll1.push_back(k);
                  a=a/10;
          }     
          while(b!=0)
          {
                  k=b%10;
                  if(flag==0 && k!=0)
                  {
                        coll2.push_back(k);
                        flag=1;
                  }
                  if(flag==1)
                  coll2.push_back(k);
                  b=b/10;
          }                   
          l1=coll1.size();
          l2=coll2.size();
          for(int i             
               

