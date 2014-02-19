#include<iostream>
using namespace std;
int main()
{
    float a,s=0,m;
    for(int i=0;i<5;i++)
    {
            cout<<"Enter the marks of Student:"<<i+1<<"= ";
            cin>>m;
            cout<<"\n\n";
            s=s+m;
    }
    a=s/5;
    cout<<"\n\nThe Average is: "<<a<<"\n\n";
    system ("pause");
    return 0;
}
