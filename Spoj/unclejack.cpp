#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t=0,a,b;
    long long int k;
    while(t==0)
    {
               cin>>a>>b;
               if(a==0 && b==0)
               break;
               k=pow(a,b);
               cout<<k<<"\n";
    
    }
    system("pause");
    return 0;
}
    
