#include<stdio.h>
main()
{
    int n,m,i,j,st,ds,count=0;
    scanf("%d%d",&n,&m);
    while(n!=0&&m!=0)
    {
    long int a[n][2],b[m][2],d;
    for(i=0;i<n;i++)
    scanf("%d%d%lu%lu",&st,&ds,&a[i][0],&a[i][1]);
    for(j=0;j<m;j++)
    scanf("%lu%lu",&b[j][0],&b[j][1]);
    for(j=0;j<m;j++)
    {
    count=0;
    b[j][1]+=b[j][0];
                    for(i=0;i<n;i++)
                    {
                                    d=a[i][0]+a[i][1];
                                    if(b[j][0]<d&&b[j][1]>=d)
                                    count++;
                                    else if(a[i][0]>b[j][0]&&a[i][0]<b[j][1])
                                    count++;
                                    else if(a[i][0]<=b[j][0]&&d>b[j][1])
                                    count++;             
                    }
                    printf("%d\n",count);
    }
    scanf("%d%d",&n,&m);
    }
}
