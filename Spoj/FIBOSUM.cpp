#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long long int t,a,b,m,n,rsum=0,sum=0,d,f,g;
    float s,r;
    s=(1+sqrt(5))/2;
    r=(1-sqrt(5))/2;
    int k;
    cin>>k;
    while(k>0)
    { k--;
      rsum=0;
      sum=0;
      cin>>m>>n;        
      //sum=(pow(s,m+1)-pow(r,m+1));
      //rsum=(pow(s,n+2)-pow(r,n+2));
      sum=((pow(1.6180339,m+1) -  pow( ((-1)*0.6180339),m+1))/2.236067977);
      rsum=((pow(1.6180339,n+2) -  pow(((-1)*0.6180339),n+2))/2.236067977);
      rsum=(rsum-sum)% 1000000007;
      cout<<(rsum)<<"\n";
    }
   // system("pause");
    return 0;
}
    




