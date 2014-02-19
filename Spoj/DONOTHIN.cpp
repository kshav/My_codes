#include<iostream>
using namespace std;

int main()
{
    int k=0,m,n;
    long long int a,b,c;
    
    while(k==0)
    {     b=0;
          c=0;
          cin>>m;
          cin>>n;
          if(m==-1 && n==-1)
          break;
          int i=0;
          while(i<m)
          {
               cin>>a;
               b=b+a;
               c=c+b*n;
               i++;
          }
          cout<<c<<"\n";
    }

    return 0;
}
                    
