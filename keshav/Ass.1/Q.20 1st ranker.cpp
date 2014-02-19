#include<iostream>
using namespace std;
int main()
{
    int a[5][3],i,j,b[5],max,pos=0;
    for (i=0;i<5;i++)
    {
    cout<<"For "<<i+1<<" Student\n";
    for(j=0;j<3;j++)
          {
                    cout<<"\nEnter the marks of "<<j+1<<" subject: ";
                    cin>>a[i][j];
                    cout<<"\n";
          }          
             b[i]=a[i][0]+a[i][1]+a[i][2];
    }    
    max=b[0];
    for (i=1;i<5;i++)
    {
    if(b[i]>max)
   { max=b[i];
    pos=i+1;      
    }
    }
    cout<<"Max marks is "<<max;
   cout<<" of student no. "<<pos;
    system("pause");
    return 0;
}
    
    
          
          
