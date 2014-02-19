#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int n,k,i,j,a,b,v,sum1,sum;
    double g;
    cin>>n;
    cin>>k;
    g=(double)1/k;
    //cout<<g<<endl;
    v=n*(1-g);
    //cout<<v<<endl;
    sum1=0;
    for(i=v;;i++)
    {
                 if(sum1>=n)
                 break;
                 sum=0;
                 for(j=0;;j++)
                 {
                         a=i/pow(k,j);
                         if(a==0)
                         break;
                         sum+=a;
                 }
                 //cout<<i<<" "<<sum<<endl;
                 sum1=sum;
    }
    cout<<i-1;
   // system("pause");
    return 0;
}
