#include <iostream>
using namespace std;
int main()
{
    float b,h,d,g;
    cout<<"Enter the salary of an Employee: ";
    cin>>b;
    if(b>=1500)
    {
               h=0.1*b;
               d=0.95*b;
     
     }
     else
     {
         h=500;
         d=0.90*b;
     }
     g=b+h+d;
     cout<<"\nGross salary is: "<<g<<"\n\n";
     system("pause");
     return 0;
}
               

