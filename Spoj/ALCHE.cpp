#include<iostream>
using namespace std;

int main()
{
    int t=0;
    double a,b;
    while(t==0)
    {
       cin>>a;
       cin>>b;
       if(a==-1 && b==-1)
       break;
       a=a/1000;
       b=b/37;
       if(a==b)
       cout<<"Y\n";       
       else
       cout<<"N\n";
    }

    return 0;
}        
