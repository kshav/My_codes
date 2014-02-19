#include<iostream>
using namespace std;

int main()
{
   int t=0,n;
   long long int sum,l,s;
   
  cout<<"\n";
   while(t==0)
   {
    cin>>n;
    if(n==-1)
    break;
    int i=0;
    sum=0;
    t=0;
    while(i<n)
     {cin>>l;
     
       if(l>t)
       s=t+(l-n);
       sum=sum+(l%n);
       i++;}
    if(sum%n==0)
    cout<<s;
    else 
    cout<<-1;
   }
    
    return 0;
}

    
      





