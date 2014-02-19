#include<iostream>
using namespace std;
int main()
{
    long long int i,b,f,n,count=0;
    int t=1;
    
    while(t==1)
    {scanf("%lld%lld%lld",&i,&b,&f);
    if(i==0&&b==0&&f==0)
    break;
                             count=0;
    
                            if(i<f)
                            swap(i,f);
                            if((i-f)%b!=0)
                            printf("No accounting tablet\n");
                            else
                            {
                            n=(i-f)/(b*3);
                            count+=n;
                            i=i-(b*n*3);
                            n=(i-f)/(b*2);
                            count+=n;
                            i=i-(b*n*2);
                            n=(i-f)/(b);
                            count+=n;
                            i=i-b*n;
                            printf("%lld\n",count);
                            }
    }
    return 0;
}

                           
