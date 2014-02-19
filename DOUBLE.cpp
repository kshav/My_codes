#include<stdio.h>


int main()
{
    int t=0,n;
    long long int s;
    scanf("%d",&n);
    while(t<n)
    {
        scanf("%lld",&s);
        if(s%2==0)
        printf("%lld\n",s);
        else
        printf("%lld\n",s-1);
        t++;
    }
    //system("Pause");
    return 0;
}      
