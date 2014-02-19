#include<iostream>
using namespace std;

int main()
{
   long long int  n,m,s=0,k,i=0,j=0;
   scanf("%lld",&n);
   while(j<n)
   {    i=0;
        s=0;
        scanf("%lld",&m);     
        while(i<m)
        {
        scanf("%lld",&k);
        s=s^k;
        i++;
        }
       cout<<s<<"\n";
       j++;
   }
       
   
   //system("pause");
   return 0;
}      

