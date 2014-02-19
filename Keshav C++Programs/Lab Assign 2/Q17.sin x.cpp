#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double x,s=0,k=1,f,d=1;
    int n;
    cout<<"Enter the value of x(in radians) in sinx: ";
    cin>>x;
    cout<<"\nEnter the no. of terms upto which you want to calculate: ";
    cin>>n;
    for(int i=1,g=1;i<=n;i++,g+=2)
    {  k=k*(-1);
        f=1;
        for(int j=1;j<=g;j++)
                 f=f*j;
        if(i==1)
          d=x;
         else
          d=d*x*x;
               
         s=s-((k*d)/f);
    
    }
    cout<<"\nThe value of sin"<<x<<"is: "<<s;
    getch();
    return 0;
}
             
