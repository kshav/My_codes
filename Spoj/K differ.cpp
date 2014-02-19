#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long int n,k;
    cin>>n;
    cin>>k;
    long long int arr[n],start=0,end=0,count=0;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    cout<<"\n";
    while(end<=n)
    {
       while(arr[end]-arr[start] < k )
       {
          end++;
       }                                 
       if(arr[end]-arr[start]==k)
       {count++;
        end++;}       
       else if(arr[end]-arr[start] > k)
       {
            end--;
            start++;
       }
    }
    cout<<count;
    //system("Pause");
    return 0;
}
                
                 
  
    
    
