#include <iostream>
#include <conio.h>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,d,e,f,g;
    cout<<"Write the value of a,b,c from equa. of the equa. ax^2 +bx+c";
    cout<<"\na= ";
    cin>>a;
    cout<<"\nb= ";
    cin>>b;
    cout<<"\nc= ";
    cin>>c;
    d=(b*b)-(4*a*c);
    if (d<0)
    cout<<"\nRoots are imaginary";
    else 
    {
         e= sqrt(d);
         f=(-b+e)/(2*a);
         g=(-b-e)/(2*a);
     cout<<"\n1st root is: "<<f;
     cout<<"\n2nd root is: "<<g;
     }
     getch();
     return 0;
     
}
         
    
    
