#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    
    int n,h,cnt=0,num,j=0,diff=0;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    while(cnt<h)
    {
       j=n-1;
       while(a[j-1]==a[j])
       {         
         j--;
       }
       if(j-1>0)
       diff=a[j]-a[j-1];
       else
       diff=-1;
       num=j;
       if((num*diff)+cnt < h)
       {cnt+=num*diff;
        for(int k=num;k<n;k++)
        a[k]=a[k]-diff;}
       else
       {
           for(int i=1;i<=diff;i++)
           {
                   if((i*num)+cnt >= h)
                   { cnt+=i*num;
                     for(int k=num;k<n;k++)
                     a[k]=a[k]-i;
                     break;}
                   }
           }
    }
    
    cout<<cnt<<"\n";
    system("pause");
    return 0;
} 
