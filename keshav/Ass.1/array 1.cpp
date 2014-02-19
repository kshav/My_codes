#include<iostream>
using namespace std;
int main()
{
    int a[5][3],i,j,n,t,k,max;
    for (i=0;i<5;i++)
    {
        cout<<"Student no."<<i+1;
        for (j=0;j<3;j++)
        {
        cout<<"\nEnter the marks of "<<j+1<<" subject: ";
        cin>>a[i][j];
        }
    }
    for (i=0;i<5;i++)
    {
        a[i][0] = a[i][0] + a[i][1] + a[i][2];
    }
    max = a[0][0];

    for (i=1; i<5; i++)
    {
    if (a[i][0]>a[0][0])
    max=a[i][0];
    }

    cout<<max<<", ";
    cout<<"1st rank is of"<<i;
    system("pause");
    return 0;
}
    
