#include<stdio.h>
#include<ctype.h>
struct node
{
       int s,f,c;
};
inline int read_int ( void )
{
int Ret = 0;
char Ch;
while ( isdigit ( Ch = getchar() ) ) Ret = Ret * 10 + ( Ch - '0' );
return Ret;
}

int main()
{
    int i,t,n,j,a[50],d;
    t=read_int();
    while(t--)
    {
    n=read_int();
    node st[n];
    for(i=0;i<n;i++)
    {
    //scanf("%d%d%d",&st[i].s,&st[i].f,&st[i].c);
    st[i].s=read_int();
    st[i].f=read_int();
    st[i].c=read_int();
    }
    a[49]=0;
    for(i=48;i>=0;i--)
    {
    a[i]=a[i+1];
    for(j=0;j<n;j++)
    if(st[j].s==i)
    {
    d=a[st[j].f]+st[j].c;
    a[i]=a[i]>d?a[i]:d;
    }
    }
    printf("%d\n",a[0]);
    }
    return 0;
} 
    
