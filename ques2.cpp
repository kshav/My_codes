#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int na,ma,nb,mb,x,y,sum=0,max=0,xmax,ymax;
    cin>>na>>ma;
    char s;
    int a[50][50];
    for(int i=1;i<=na;i++)
    for(int j=1;j<=ma;j++)
    {cin>>s;
    a[i][j]=s-'0';
}    
    cin>>nb>>mb;
    int b[50][50];
    for(int i=1;i<=nb;i++)
    for(int j=1;j<=mb;j++){
    cin>>s;
    b[i][j]=s-'0';}
    
    for(x=-50;x<50;x++)
    {for(y=-50;y<50;y++)
    {sum=0;
    for(int i=1;(i<=na && i+x<=nb) ;i++)
    {for(int j=1;(j<=ma && j+y<=mb) ;j++)
    sum+=a[i][j]*b[i+x][j+y];}
    if(abs(sum)>=max)
    {xmax=x;
    ymax=y;}
    }                                    }
    cout<<xmax-1<<" "<<ymax-1;
   // system("pause");
    return 0;
}
