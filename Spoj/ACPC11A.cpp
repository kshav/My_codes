#include<iostream>
using namespace std;

int main()
{
    int t=0,n,m,k;
    cin>>n;
    while(t<n)
    {    k=-1; 
         cin>>m;
         string a[m];
         for(int i=0;i<m;i++)
         cin>>a[i];
         for(int i=0;i<m;i++)
         {
                 if(a[i][0]!='#')
                 {k=i;
                  break;
                 }
         }
         if(k==-1)
         {for(int i=0;i<m;i++)
          cout<<a[i]<<" ";
         }
         else
         {
             for(int i=k+1;i<m;i++)
             cout<<a[i]<<" ";
             cout<<a[k]<<" ";
             for(int i=0;i<k;i++)
             cout<<a[i]<<" ";
         }
         cout<<"\n\n";
         t++;
    }
    //system("pause");
    return 0;
}     
