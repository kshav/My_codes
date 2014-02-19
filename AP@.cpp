#include<iostream>
using namespace std;

int main()
{
    int t=0,n;
    long long int a3,b3,s,a,d,n1;
    scanf("%d",&n);
    while(t<n)
    {
      scanf("%lld%lld%lld",&a3,&b3,&s);
      n1=(2*s)/(a3+b3);
      d=(b3-a3)/(n1-5);
      a=a3-2*d;
      cout<<n1<<"\n";
      for(int i=0;i<n1;i++)
      cout<<a+(i)*d<<" ";
      cout<<"\n";
      t++;   
    }
    //system("pause");
    return 0;
}        


