#include<iostream>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;
long long int arr[20000]={0};
int main()
{
    int t,n,cnt=0,len,a[3]={0},i=0,j=0,k=0,l=0,p=0,count,max,h,m,sc;
    long long int d=0;
    //string s;
    scanf("%d",&t);
    while(t>0)
    {
       scanf("%d",&n);    
       cnt++;
       p=n;
       l=0;
       while(p>0)
       {scanf("%d:%d:%d",&h,&m,&sc);
        //cin>>s;       
        //len=s.size();
       
        //a[0]=a[1]=a[2]=0;
        
        d=h*3600+m*60+sc;
        arr[l]=d;
        l++;
        p--;
       }
       sort(arr,arr+n);
       scanf("%lld",&d);
       j=k=0;
       count=0;
       max=0;
      for(j=0;(j<n) && (k<n);j++)
      {
       while((arr[k]-arr[j])<d && (k<n))
       {
          
          count= (k-j)+1;
          if(count>max)
          max=count;
          k++;        
       }
       k--;                   
      }                  
      
       printf("Case %d: %d\n",cnt,max);
       t--;
      
    }
    system("pause");
    return 0;
}
    
    
    
  
