   // g(n,k)=(g(n-1,k)+k)mod n, with g(1,k)=0 
   
#include<iostream>
using namespace std;
long long int arr[100000][100000];
int func( long long int n , long long int d)
{
    if(n==1)
    return 0;
    else if(arr[n][d]!=0)
    return arr[n][d];
    else 
    {
          int jk= (func(n-1,k)+k)%n;
          arr[n][d]=jk;
    }
    return arr[n][d];
}
int main()
{
    long long int n,d;
    scanf("%lld%lld",&n,&d);
    arr[1000000][1000000]={0};
    int k=func(n,d);
    cout<<k;
    system("pause");
    return 0;
} 
