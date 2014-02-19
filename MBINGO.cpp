#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
   int a,b,k,flag=1,t=0;
   while(t==0)
   {cin>>a>>b;
    if(a==0 && b==0)
    break;
    int ar[b];
    int cou[a+1];
   for(int i=0;i<a+1;i++)
   cou[i]=0;
   cou[0]=1;
   for(int i=0;i<b;i++)
   cin>>ar[i];
   sort(ar,ar+b );
   for(int i=0;i<b-1;i++)
   {
           for(int j=i+1;j<b;j++)
           {
                   k=ar[j]-ar[i];
                   if(k < a+1)
                   cou[k]=1;
           }
   }
   flag=1;
   for(int i=0;i<a+1;i++)
   {
           if(cou[i]==0)
           {
               flag=0;
               break;
           }
   }
   if(flag==0)
   cout<<"N\n\n";
   else
   cout<<"Y\n\n";         
  }
  system("pause");
  return 0;
}
   
