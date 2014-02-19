#include<iostream>
#include<string.h>
using namespace std;
char a[100000]={0};
int main()
{
    int t;
    long long int i,k,len,j,cnt=0,sum=0;
    scanf("%d",&t);
    while(t--){
    sum=0;           
    scanf("%s",&a);
    int len=strlen(a);
    for(i=1;i<len;i++)
    {cnt=j=0;
     k=i;
     while(a[k++]==a[j++])
     cnt++;
     sum+=cnt;}
     printf("%lld\n",sum+len);}
    // system("pause");
     return 0;
}
                                                   
