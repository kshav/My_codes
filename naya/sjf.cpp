#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int name[4]={0},avg[3]={0},a[4]={0},b[4]={0},pos=0;
    int s=0,i,j,small;
    for(i=0;i<4;i++)
    {
    cin>>a[i]>>b[i];
    name[i]=i;
    }
    for(j=0;j<=3;j++)
    {
     small=b[j];
     pos=j;
     for(i=j+1;i<=3;i++)
     {
     if(a[i]<=s)
     {
     if(b[i]<small)
     {
     small=b[i];
     pos=i;
     }
     }
     }
     swap(name[j],name[pos]);
     swap(a[j],a[pos]);
     swap(b[j],b[pos]);
     s+=b[j];
     cout<<name[j];
     for(i=j+1;i<=3;i++)
     {
     if(s>a[i])
     avg[i]+=(s-a[i]);
     }
     s+=b[j];
     }
     for(i=0;i<4;i++)
     cout<<name[i]<<" "<<avg[i]<<"\n";
     getch();
     return 0;
     }
