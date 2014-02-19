#include<iostream>
using namespace std;

int main()
{
    int flag=0;
    long long int n,m;
    int j;
    long long int a[n],b[n],c[n];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    cin>>a[i];
    b[0]=a[0];
    for(int i=1;i<n;i++)
    {b[i]=b[i-1]+a[i];
     if(b[i]==m)
     {cout<<m;
      flag=1;
      break;}
     }
     if(flag==0){
     for(int i=0;i<n;i++)
     {   j=0;
        while(b[i]>m)
        {
            b[i]=b[i]-a[j];
            j++;
        }               
        c[i]=b[i];
     }
     long long int max=c[0];
     for(int i=0;i<n;i++)
     {
             if(c[i]>max)
             max=c[i];
     }
     cout<<max;}
     cout<<"\n";
    //system("pause");
     return 0;
}
    
    
