#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[5],i=0,flag=0,small=0;
    for(i=0;i<5;i++)
    cin>>a[i];
    for(i=0;(i<5)&&(flag==0);i++)
    {
     flag=1;
     for(int j=0;j<5-i;j++)
     {
      if(a[j]>a[j+1])
      {
       small=a[j+1];
       a[j+1]=a[j];
       a[j]=small;
       flag=0;
      }
     }
    }
    for(i=0;i<5;i++)
    cout<<"\n"<<a[i];
    getch();
    return 0;
}
       
