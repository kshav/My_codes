#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
    char c[101],d;
    int i=1,f=0,a[101];
    for(i=1;i<=99;i++)
    {
    scanf("%d",&a[i]); 
    scanf("%s",&c[i]); 
    }
    d=c[9];
    for(i=18;i<=81;i+=9) 
    {
    if(d!=c[i])
    {
    f=1;
    break;
    }
    }
    if(f==0)
    printf("YES\n");
    else
    printf("NO\n");
    t--;
    }
    return 0;
}
     
    
    
