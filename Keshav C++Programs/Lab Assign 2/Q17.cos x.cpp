#include<iostream>
using namespace std;
int main()
{
    double n,x,s=1,k=1,f,d=1;
    cout<<"Enter the value of x in cosx(in radians): ";
    cin>>x;
    cout<<"\nEnter the number of terms upto which you want to calculate: ";
    cin>>n;
    for(int i=0,g=2;i<n;i++,g+=2)
    {
            k=k*(-1);
            f=1;
            for(int j=1;j<=g;j++)
            f=f*j;
            d=d*x*x;
            s=s+((k*d)/f);
    }
    cout<<"\nThe value of cos"<<x<<"= "<<s<<"\n\n";
    system ("\npause");
    return 0;
}
