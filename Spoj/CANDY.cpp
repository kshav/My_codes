#include<iostream>
using namespace std;

int main()
{
   int t=0,n;
   long long int sum,l,s,add;
   while(t==0)
   {
    cin>>n;
    if(n==-1)
    break;
    int a[n];
    int i=0;
    sum=0;
    t=0;
    while(i<n)
     {cin>>a[i];
      sum=sum+(a[i]%n);
       i++;}
    if(sum%n==0)
   { 
     add=0;
     for(int j=0;j<n;j++)
     {
         add=add+a[j];
     }
     add=add/n;
     for(int j=0;j<n;j++)
     {
        if(a[j]>add)
        {
              s=s+(a[j]-add);
        }
     }   
     cout<<s<<"\n";
   }
    
    else 
    cout<<-1<<"\n";
  }
    
    return 0;
}

    
      





