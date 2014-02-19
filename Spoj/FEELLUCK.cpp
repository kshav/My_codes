#include<iostream>
using namespace std;

int main()
{
    int t=0,n,a[10],s,max;
    cin>>n;
    string site[10];
    while(t<n)
    {
         for(int i=0;i<10;i++)
         cin>>site[i]>>a[i];
         max=a[0];
         for(int i=0;i<10;i++)
         {
          if(a[i]>max)
          {max=a[i];
          s=i;}
          }
          cout<<"Case #"<<t+1<<":\n";
          for(int i=0;i<10;i++)
          {
                  if(a[i]==max)
                  cout<<site[i]<<"\n";
          }
         
          t++;
    }
    //system("pause");
    return 0;
}          
                      
