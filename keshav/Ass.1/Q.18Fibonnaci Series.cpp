#include<iostream>
using namespace std;
int main()
{
    int n,a[3],i;
    cout<<"Enter the number of terms you want to see FIBONACCI SERIES upto: ";
    cin>>n;
    cout<<"\nFIBONACCI SERIES\n\n";
    a[0]=0;
    a[1]=1;
    cout<<a[0]<<"\t";
    cout<<a[1]<<"\t";
    for(i=2;i<=n;i++)
    {a[2]=a[0]+a[1];
    cout<<a[2]<<"\t";
    a[0]=a[1];
    a[1]=a[2];
    }
    cout<<"\n\n";
    system("pause");
    return 0;
}    
