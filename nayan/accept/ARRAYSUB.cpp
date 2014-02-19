//#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
main()
{
    long long int n,i,j,k,sub,pos=-1;
    vector<long long int >v;
    scanf("%llu",&n);
    printf("\n\n");
    for(i=0;i<n;i++)
    {
    scanf("%llu",&sub);
    v.push_back(sub);
    }
    scanf("%llu",&k);
    sub=-1;
    for(i=0;i<k;i++)
    if(sub<v[i]){
    sub=v[i];pos=i;
    }
    printf("%llu",sub);
    for(;i<n;i++)
    {
    if(pos<i+1-k)
    {
    sub=-1;
    for(j=i+1-k;j<=i;j++)
    if(sub<v[j])
    {
    sub=v[j];pos=j;
    }
    }
    else if(sub<v[i])
    sub=v[i];
    printf(" %llu",sub);
    }
    printf("\n");
    //system("pause");
    //return 0;
}
