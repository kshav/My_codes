#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,j,count=0,top=-1,b[3];
    cout<<" how many elements do you want to enter ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
                   for(j=0;j<=top;j++)
                   {
                                     if(a[i]==b[j])
                                     break;
                   }
                   if(j<=top&&top==2);
                   else if(j==3)
                   {
                     b[0]=b[1];
                     b[1]=b[2];
                     b[2]=a[i];
                     count++;
                   }
                   else
                   {
                    b[++top]=a[i];
                    count++;
                   }
    }
    cout<<"\nTotal Number of PAGE FAULTS ARE "<<count;
    getch();
    return 0;
}  
    
    
