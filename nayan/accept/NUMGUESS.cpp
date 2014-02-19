#include<stdio.h>
void dec(int a,int b)
{
 char s[6];
 printf("%d\n",(a+b)/2);
 fflush(stdout);
 scanf("%s",&s);
 if(s[0]=='L')
 dec((a+b)/2+1,b);
 else if(s[0]=='H')
 dec(a,(a+b)/2-1);
}
main()
{
 int a,b;
 char s[6];
 scanf("%d%d",&a,&b);
 dec(a,b);
}
