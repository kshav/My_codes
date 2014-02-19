#include<iostream>
using namespace std;
int main()
{
    int n,count=0,count1=0,count2=0,sum=1,i;
    scanf("%d",&n);
    string a[n+1];
    for(i=0;i<n;i++)
    {
     cin>>a[i];
     if(a[i][2]=='2')
     count1++;
     else if(a[i][0]=='1')
     count++;
     else
     count2++;
     }
     sum+=count1/2;
     count1=count1%2;
     if(count2>=count)
     {
     sum+=count;
     count2-=count;
     count=0;
     }
     else
     {
      sum+=count2;
     count-=count2;
     count2=0;
     }
     sum+=count2;
     sum+=count/4;
     count=count%4;
      if(count+count1>3)
     sum+=2;
     else if(count+count1==0);
     else sum++;   
     cout<<sum<<"\n";
     return 0;
     }
     
        
     
