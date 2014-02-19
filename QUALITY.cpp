#include<iostream>
using namespace std;

int main()
{
    long long int a,b,c,d,e,f,sum,cnt,counter=0;
    while(scanf("%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e,&f)!=EOF)
    {  counter++;
       cnt=0;
       sum=0;
       if(a!=0)
       {cnt++;
        sum+=a+1200*(d-1);
       }
       if(b!=0)
       {cnt++;
        sum+=b+1200*(e-1);
       }
       if(c!=0)
       {cnt++;
        sum+=c+1200*(f-1);
       }
       printf("team %lld: %lld, %lld",counter,cnt,sum);
    }
    return 0;    //system("pause");
}                                                            


