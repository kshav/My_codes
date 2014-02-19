#include<iostream>
#include<conio.h>
using namespace std;
int a[5][5],d[5],p[5],v[5],q[5];
void insert(int n)
{
     int d;
 for(int i=0;i<n;i++)
 for(int j=0;j<n;j++)
 {
  if(i==j)
  a[i][j]=3000;
  else
  {
  cout<<"\n if edge exit from "<<i<<" to "<<j<<" press weight else 0";
  cin>>d;
  if(d==0)
  a[i][j]=3000;
  else
  a[i][j]=d;
  }
 }
}
void display(int n)
{
 for( int i=0;i<n;i++)
 {
 for(int j=0;j<n;j++)
 cout<<a[i][j]<<" ";
 cout<<"\n";
}
}
void dijakstra(int n)
{
 int flag=0,i=0,w=0,k=-1,m=0,pos=0,x=0,small=0;
 while(flag!=1)
 {
  for(i=0;i<n;i++)
  {
   if(a[small][i]!=3000)
   {
    if(v[i]==0)
    {
     q[++k]=i;
     m=d[small]+a[small][i];
     if(m<=d[i]||d[i]==0)
     {
     d[i]=m;
     p[i]=small;
     }
     
    }
   }
  }
  v[small]=1;
  small=q[0];
  pos=0;
  for(i=0;i<=k;i++)
  {
   if(d[q[i]]<d[small])
    {
     small=q[i];
     pos=i;
    }
   }
   for(w=pos;w<k;w++)
   q[w]=q[w+1];
   k--;
   flag=1;
   for(x=0;x<n&&flag==1;x++)
   {
    if(v[x]==0)
    flag=0;
    else
    flag=1;
   }
};
}  
int main()
{
    int i=0;
    a[0][0]=a[0][3]=a[0][4]=a[1][0]=a[1][1]=a[1][3]=a[1][4]=a[2][0]=a[2][1]=a[2][2]=a[3][0]=a[3][3]=a[4][0]=a[4][1]=a[4][1]=a[4][2]=a[4][4]=a[4][3]=3000;
    a[0][1]=100;
    a[0][2]=30;
    a[1][2]=20;
    a[2][3]=10;
    a[2][4]=60;
    a[3][1]=15;
    a[3][2]=10;
    a[3][4]=50;
    
    for( i=0;i<5;i++)
d[i]=0;
for(i=0;i<5;i++)
p[i]=-1;
for(i=0;i<5;i++)
v[i]=0;
for(i=0;i<5;i++)
q[i]=0;

/*    int n;
    cout<<"enter how man node do you wnt ";
    cin>>n;
    insert(n);*/
    display(5);
    dijakstra(5);
    cout<<"\n 0 "<<d[4]<<" "<<p[4];
    getch();
    return 0;
}
