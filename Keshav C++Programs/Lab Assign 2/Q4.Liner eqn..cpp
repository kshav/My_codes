#include<iostream>
using namespace std;
int main()
{
    float a1,b1,c1,a2,b2,c2,x,y;
    cout<<"Enter the value of a1,b1,c1 for eqn. a1x+b1y+c1+0 : ";
    cin>>a1>>b1>>c1;
    cout<<"\nenter the value of a2,b2,c2 for eqn.a2x+b2y+c2=0 :";
    cin>>a2>>b2>>c2;
    x=((a1*b2)-(a2*b1))/((c1*a2)-(c2*a1));
    y=((b1*c2)-(b2*c1))/((c1*a2)-(c2*a1));
    cout<<"\nThe solution is\nx: "<<x<<"\ny: "<<y<<"\n\n";
    system ("pause");
    return 0;
}
    
