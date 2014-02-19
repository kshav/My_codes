#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int  t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
            
             long long int n,a,b,sum;
            scanf("%lld%lld%lld",&n,&a,&b);
             long long int a1[n];
            for(int k=0;k<n;k++)
            scanf("%lld",&a1[k]);
            printf("Case #%d: ",i);
            if(n==1)
            {
                    printf("%lld\n",(2*a+b));
                    continue;
                    }
            sum=((n*b)+(2*a));
            for(int j=0;j<n-1;j++)
              sum+=(min((b*(a1[j+1]-a1[j]-1)),2*a));                                    
                printf("%lld\n",sum);
}
system("pause");
return 0;
}
