#include<iostream>
using namespace std;

int main()
{
    int n,t=0;
    long long int r;
    double d;
    scanf("%d",&n);
    while(t!=n)
    {
       cin>>r;
       d=4*r*r+0.25;
       cout<<"Case "<<t+1<<": ";
       printf("%.2f\n",d);
       t++;
    }
    //system("pause");
    return 0;
}        
