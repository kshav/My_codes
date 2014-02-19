#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,t=0,count=0;
    while(t==0)
   {cin>>a>>b;
    if(a==0 && b==0)
    break;
    string arr[a];
    int cnt[a];
    for(int i=0;i<a;i++)
    cin>>arr[i];
    sort(arr,arr+a);
  //  for(int i=0;i<a;i++)
   // cout<<arr[i]<<"\n";
    
    for(int i=0;i<a;i++)
    cnt[i]=0;
    count=0;
    for(int i=1;i<a;i++)
    {
      if(arr[i]==arr[i-1])
      count++;
      else
      {
       cnt[count]++;
       count=0;
      }
      if(i==a-1)
      cnt[count]++;
    }
    for(int i=0;i<a;i++)
    cout<<cnt[i]<<"\n";
    cout<<"\n";
  }
  //system("pause");
  return 0;
}        
            
