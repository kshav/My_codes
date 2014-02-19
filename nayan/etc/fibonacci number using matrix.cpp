#include<iostream>
using namespace std;
void mul(int f[2][2],int m[2][2])
{
     int w,x,y,z;
     w=f[0][0]*m[0][0]+f[0][1]*m[1][0];
     x=f[0][0]*m[0][1]+f[0][1]*m[1][1];
     y=f[1][0]*m[0][0]+f[1][1]*m[1][0];
     z=f[1][0]*m[0][1]+f[1][1]*m[1][1];
     
     f[0][0]=w;
     f[0][1]=x;
     f[1][0]=y;
     f[1][1]=z;
}
void power(int f[2][2],int n)
{
     if(n<=1)
     return;
     int m[2][2]={{1,1},{1,0}};
     power(f,n/2);
     mul(f,f);
     if(n%2!=0)
     mul(f,m);
}
int fib(int n)
{
    if(n==0)
    return 0;
    int f[2][2]={{1,1},{1,0}};
    power(f,n-1);
    return f[0][0];
}
    
int main()
{while(1)
{
    int n;
    cin>>n;
    int c=fib(n);
    cout<<c<<"\n";
    
}
}    
