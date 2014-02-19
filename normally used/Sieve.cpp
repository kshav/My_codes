#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main()
{
    int t=0,n;
    cin>>n;
    while(t<n){
    long long int a,b,j,l,k;
    cin>>a>>b;
    b=b+1;
    vector<bool> arr;
    for(int i=0;i<b;i++)
    arr.push_back(1);
    arr[0]=0;
    arr[1]=0;
    double c = (sqrt(b-1));
    l= int(c);
    l=l+1;
   // cout<<"L: "<<l<<"\n";
    for(int i=2;i<l;i++)
    {
       if(arr[i]==1)
       {
           j=i;
           
           if(j%2==0)
           {
                k=2;     
                j=k*j;     
                while(j<b)
                {  
                   arr[j]=0;
                   j=i;
                   k++;
                   j=k*j;
                }}
           else
           {   k=3;
               j=k*j;
               while(j<b)
               {  
                 arr[j]=0;
                 j=i;
                 k=k+2;
                 j=k*j;   
               }}}}
    for(int i=a;i<b;i++)
    {
            if(arr[i]==1)
            cout<<i<<"\n";
    }              
    cout<<"\n";
    t++;
    }          
    system("pause");
    return 0;
}
    
    
    
    
    
    
    
    
