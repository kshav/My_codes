#include<iostream>
#include<conio.h>
using namespace std; 
int main()
{
    float ***x;
    int a,b,c,i,j,k;
    cout<<"\nenter the dimensions:";
    cout<<"\n enter the length  :";
    cin>>a;
    cout<<"\n enter the breadth :";
    cin>>b;
    cout<<"\n enter the height  :";
    cin>>c;
    x=(float***)malloc(a);
    for(int i=0;i<a;i++)
    {
     x[i]=(float**)malloc(b);
     for(int j=0;j<b;j++)
     {
       x[i][j]=new float(c);
       for(int k=0;k<c;k++)
       {
       cout<<"\n enter the element:";
       cin>>x[i][j][k];
       }
      }
    }
    for(i=0;i<a;i++)
    {
    for(j=0;j<b;j++)
    {
    for(k=0;k<c;k++)
    cout<<"\n"<<x[i][j][k];
    }
    }
    getch();
    return 0;
}
