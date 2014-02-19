#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t=0;
    long long int k,m;
    while(t==0)
    { 
      cin>>k;
      if(k==-1)
      break;
      else if((k-1)%6==0)
      {
           k=(k-1)/6;
           k=2*k;
           k=1+4*k;
           if(k>0){
             m=sqrt(k);
           if(m*m==k)
           cout<<"Y\n";
           else
           cout<<"N\n";
           }
           else
           cout<<"N\n";
      }
      else
      cout<<"N\n";
     }
    
    return 0;
}
      



