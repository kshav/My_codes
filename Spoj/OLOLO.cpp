#include<iostream>
using namespace std;

int main()
{
   long long int  n,s=0,k,i=0;
   scanf("%lld",&n);
   while(i<n)
   {
        scanf("%lld",&k);
        s=s^k;
        i++;
   }
   cout<<s;
   //system("pause");
   return 0;
}      
