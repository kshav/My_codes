#include<iostream>
using namespace std;

int main()
{
    int flag1=0,flag2=0;
    float x1,x2,x3,x4,y1,y2,y3,y4,a,b,c,d;
    cout<<"Enter coord of A and B which form line segment AB\n";
    cin>>x1>>y1>>x2>>y2;
    cout<<"\nEnter coord of C and D which form line segment AB\n";
    cin>>x3>>y3>>x4>>y4;
   // a=(y-y4)(x4-x3)-(x-x4)(y4-y3)
    a=(y3-y2)*(x2-x1)-(x3-x2)*(y2-y1);
    b=(y4-y2)*(x2-x1)-(x4-x2)*(y2-y1);
    if( (a<0 && b>0) || (a>0 && b<0) || a==0 || b==0)
    flag1=1;
   
    c=(y1-y4)*(x4-x3)-(x1-x4)*(y4-y3);
    d=(y2-y4)*(x4-x3)-(x2-x4)*(y4-y3);
    if( (c<0 && d>0) || (c>0 && d<0) || c==0 || d==0)
    flag2=1;
    
    if(flag1==1 && flag2==1)
    cout<<"Line segments intersects\n";
    else
    cout<<"Line segment don't intersect \n";
    
    system("pause");
    return 0;
}
