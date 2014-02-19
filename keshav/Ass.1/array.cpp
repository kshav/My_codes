#include<iostream>
using namespace std;
int main()
{
    int a[5],b[5],i;
    cout<<"Enter 5 no.: ";
    for (i=0;i<5;i++)
    cin>>a[i];
    cout<<"\n";
    cout<<"\a";
    for (i=0;i<5;i++)
    {
    b[i]=a[4-i];
    cout<<b[i]<<"\n\n";
    }
    system("pause");
    return 0;
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
