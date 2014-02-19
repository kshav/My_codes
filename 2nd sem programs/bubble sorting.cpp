#include<conio.h>
#include<iostream>
using namespace std;

int main()
{
    int a[5],i,j,temp;
    for(i=0;i<5;i++)
    {
                    cin>>a[i];
    }
    
    for(i=4;i>0;i--)
    {
                    for(j=0;j<=i;j++)
                    {
                                     if(a[j]>a[j+1])
                                     {
                                                    temp=a[j+1];
                                                    a[j+1]=a[j];
                                                    a[j]=temp;
                                     }
                    }
    }
    for(i=0;i<5;i++)
    {
                    cout<<a[i]<<endl;
    }
    
    getch();
    return 0;
}
