#include<iostream>
using namespace std;

int main()
{
    int k,m=0,t=0;
    int i=1;
    cin>>k;
    while(t==0)
    {      
           if(k%i==0)
           {   cout<<m<<" ";
               if(i==m)
               break;
               m=k/i; 
               cout<<i<<" ";
              
          }
          i++; 
    }
    system("pause");
    return 0;
}
                 
