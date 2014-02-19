#include<iostream>
using namespace std;
unsigned long long choose(unsigned long long int n, unsigned long long int k) {
    if (k > n) {
        return 0;
    }
    unsigned long long int r = 1, d;
    for ( d = 1; d <= k; ++d) {
        r *= n --;
        r /= d;
    }
    return r;
}
int main()
{
    unsigned long long int sum[61],d,n;
    int i,j;
    sum[2]=1;
    sum[4]=3;
    for(i=6;i<=60;i+=2)
    {
                      sum[i]=(sum[i-2]*(i-1)*(i-2))/((i/2)*(i/2-1));
    }
    sum[60]=choose(59,30);
    int test,count;
    cin>>test;
    while(test--)
    {
     cin>>n;
     if(n==2)
     cout<<"1\n";
     else
     {
     count=0;
     d=0;
     while(n!=1)
     {
     n/=2;
     count++;
     }
     if(count%2!=0)
     count--;
     for(i=count;i>=2;i-=2)
     d+=sum[i];
     cout<<d;
     cout<<endl;}
     }
    return 0;
}
                      
