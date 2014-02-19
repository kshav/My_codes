#include<iostream>
#include<vector>
using namespace std;
long long int n;


long long int func(vector <long long int> arr,long long int k ,long long int w  ,long long int sum)
{
    if(k>=n)
    return sum ;
    if(arr[k]>0)
    sum = sum + arr[k]*w+ func(arr,k+1,w+1,sum);
    else
     sum =  max(sum +arr[k]*w +func(arr,k+1,w+1,sum),sum + arr[k]*(2)+func(arr,k+1,3,sum)); 
     return sum;
}

int main()
{   int t;
    long long int i,ans=0,j,sum=0;
    scanf("%d",&t);
    while(t!=0){
    ans=0;            
    scanf("%lld",&n);
    vector <long long int> arr[n];
    for(i=0;i<n;i++)
    {scanf("%lld",&j);
    }
    ans = func(arr,0,1,sum);
    printf("%lld\n",ans);
    t--;
    }
    //system("pause");
    return 0;
}


