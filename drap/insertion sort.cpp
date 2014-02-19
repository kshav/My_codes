#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[5],i=0,I=0,flag=0,small=0,temp=0,r=0,j=0;
    for(i=0;i<5;i++)
    cin>>a[i];
     I=1,i=0;
    for( r=0;(r<=4)||(i<=r);i++)
    { 
         I=r+1;
    // for(int i=0;i<=r;i++)
    // {
      if(a[I]<=a[i])
      {
       temp=a[I];
       for( j=I;j>i;j--)
      {
       a[j]=a[j-1];
      }
      a[j]=temp;
      }
      if(i==r)
      r++;
    // }
    }
    for( i=0;i<5;i++)
    cout<<"\n"<<a[i];
    getch();
    return 0;
}
