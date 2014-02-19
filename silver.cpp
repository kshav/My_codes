#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,n,f,t=0,k=0,i=0;
    while(t==0)
    {
       cin>>n;
       if(n==0)
       break;
       i=0;
       while(k==0)      
       {
          a=pow(2,i);
          if(a>n)
          break;
          i++;
       }
       i--;
       cout<<i<<"\n";
    }
    system("pause");
    return 0;
}                
