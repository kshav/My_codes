#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
using namespace std;
int value(char a)
{
switch(a)
{
case 'm':return 1000;
case 'c':return 100;
case 'x':return 10;
case 'i':return 1;
}
}
int func(char a[10])
{
  int x=strlen(a),i=0;
  int e=0;
  while(i<x)
  {
  if(isalpha(a[i]))
  {
  if(i==0||isalpha(a[i-1]))
  { 
   e+=1*value(a[i]);
  }
  else
  e+=(((int)a[i-1])-48)*value(a[i]);
  }
  i++;
  }
  return e;
}
main()
{
    char  a[10],b[10],c[10],d;
    int test,e,f;
    scanf("%d",&test);
    while(test--)
    {
     scanf("%s%s",a,b);
     e=func(a);
     f=func(b);
     e=e+f;
     if(e/1000==0);
     else if(e/1000==1)
     printf("m");
     else
     printf("%dm",e/1000);
     e=e%1000;
     if(e/100==0);
     else if(e/100==1)
     printf("c");
     else
     printf("%dc",e/100);
     e=e%100;
     if(e/10==0);
     else if(e/10==1)
     printf("x");
     else
     printf("%dx",e/10);
     e=e%10;
     if(e==0);
     else if(e==1)
     printf("i");
     else
     printf("%di",e);
     printf("\n");
    }
    return 0;
}
