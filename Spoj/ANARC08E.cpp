#include<iostream>
using namespace std;

int main()
{
    int k,n,t,d,min;
    cin>>t;
    for(int i=0;i<t;i++)
    {
            cin>>n;
            cin>>k;
            int a[n];
            for(int i=0;i<n;i++)
            cin>>a[i];
            for(int i=0;i<n-1;i++)
            {
                    for(int j=0;j<n-1;j++)
                    {
                             if(a[j]>a[j+1])
                             swap(a[j],a[j+1]);
                    }
            }
            
            min=a[k-1]-a[0];
            for( int i=0;i+k<=n;i++)
            {
                 d=a[k+i-1]-a[i];
                 if(d<min)
                 min=d;
            }
            cout<<min;
            cout<<"\n";
    }
    system("pause");
    return 0;
}
            
