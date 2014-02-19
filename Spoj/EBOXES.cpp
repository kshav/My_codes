#include<iostream>
using namespace std;

int main()
{
    int i,n,k,t,f,loop,s;
    scanf("%d",&loop);
    i=0;
    while(i<loop)
    {
       scanf("%d",&n);
       scanf("%d",&k);
       scanf("%d",&t);
       scanf("%d",&f);
       s=(f-n)/(k-1);
       printf("%d\n",f+s);
       i++;
    }
    return 0;
}                 
