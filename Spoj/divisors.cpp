#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,a=1,b,j=-1;
    cin>>n;
    int arr[100];
    int c=sqrt(n);
    while(a<=c)
    {
       if(n%a==0)
       {
          j++;
          arr[j]=a;
          b=n/a;
          if(b!=a)
          {j++;
           arr[j]=b;}
       }
       a++;
    }
    sort(arr,arr+j+1);
    for(int i=0;i<=j;i++)
    cout<<arr[i]<<" ";
    cout<<"\n";
    system("Pause");
    return 0;
} 
           
                         
    
