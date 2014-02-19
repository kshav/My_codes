#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
   long long int m,n,a=1,b,j=-1,count=0,c2;
    cin>>m>>n;
    vector <long long int> arr,unfrnd;
    vector <int> tick;
    long double c=sqrt(n);
    for(int i=0;i<m;i++)
    {cin>>c2;
     unfrnd.push_back(c2);
    }
    
    while(a<=c)
    {
       if(n%a==0)
       {
          j++;
          arr.push_back(a);
          b=n/a;
          if(b!=a)
          {j++;
           arr.push_back(b);
          }
           if(b==a)
           break; 
       }
       a++;
    }
    int final=arr.size();
    for(int i=0;i<final;i++)
    tick.push_back(0);
    sort(arr.begin(),arr.end());
    for(int i=1;i<final;i++)
    {
            for(j=0;j<m;j++)
            {
                if(unfrnd[j]%arr[i]==0)
                {tick[i]=1;
                 break;
                }
            }
    }
    for(int i=1;i<final;i++)
    if(tick[i]==0)
    count++;
    cout<<"\n"<<count<<"\n";
    system("Pause");
    return 0;
} 
           
                         
    
