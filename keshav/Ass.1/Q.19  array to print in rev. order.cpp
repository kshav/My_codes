#include<iostream>
using namespace std;
int main()
{
    int a[5],b[5],i;
    for (i=0;i<5;i++)
    {
    cout<<"Enter no. ";
    cin>>a[i];
   b[4-i] =a[i];
}
 for (i=0;i<5;i++)
    {
    cout<<b[i]<<"\n";
    }
     system("pause");
    return 0;
}
