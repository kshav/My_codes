#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t=0,n,k=0,i;
    while(t==0)
    {          k=0; 
               i=1;
               cin>>n;
               if(n==0)
               break;
               while(k<=n)
               {
                k=pow(2,i);
                i++;
               }
               k=k/4;
     
               cout<<k<<"\n";
    }
    system("pause");
    return 0;
}
