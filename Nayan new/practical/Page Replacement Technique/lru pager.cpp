#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,j,count=0,k=0,cnt=0,top=-1,b[3],c[2],m;
    cout<<" how many elements do you want to enter ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
     c[0]=c[1]=-1;
                   for(j=0;j<=top;j++)
                   {
                                     if(a[i]==b[j])
                                     break;
                   }
                   m=-1;
                   if(j<=top&&top==2);
                   else if(j==3){
                        cnt=0;
                   for(j=i-1;j>=0;j--)
                   {
                    if(b[0]==a[j]&&c[0]!=0)
                    {
                    c[++m]=0;
                    cnt++;
                    }
                    else if(b[1]==a[j]&&c[0]!=1)
                    {
                    c[++m]=1;
                    cnt++;
                    }
                    else if(b[2]==a[j]&&c[0]!=2)
                    {
                    c[++m]=2;
                    cnt++;
                    }
                    if(cnt==2)
                    break;
                   }
                   int v=3-(c[0]+c[1]);
                   if(v>2)
                   v=1;
                   b[v]=a[i];
                   count++;
                   }
                   else
                   {
                    b[++top]=a[i];
                    count++;
                   }
                   }
                   cout<<"total number of slots "<<count;
                   getch();
                   return 0;
}
