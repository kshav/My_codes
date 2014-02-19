#include<iostream>
using namespace std;


int modified_binary(int start, int end, int arr[] ,int find)
{
    cout<<start<<" "<<end<<"\n";
    getchar();
   int mid=(start+end)/2;
    if(arr[mid]==find)
    return mid;
    if(start==end)
    return -1;
    
    if(arr[mid]>=arr[start] && find<arr[mid]&&find>=arr[start])
    return modified_binary(start,mid,arr,find);
    
    
    else if(arr[mid]<=arr[end] && find>arr[mid] &&find<arr[end])
    {
      int k=modified_binary(mid+1,end,arr,find);
      return k;
    }
    else if(arr[mid]>=arr[start] && find>arr[mid] )
    {
      int k=modified_binary(mid+1,end,arr,find);
      return k;
    }
    else if(arr[mid]<=arr[end] && find<arr[mid])
    {
     int k=modified_binary(start,mid,arr,find);
     return k;
    }
} 
    

int main()
{
    
    int a,b,n,find;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cin>>find;
    b=modified_binary(0,n-1,arr,find);
    cout<<b;
    system("pause");
}
    
    
