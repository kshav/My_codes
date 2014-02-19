#include<stdio.h>

#include<conio.h>
main()
{     char a[5][5];
float rate[5],value[5],total;
int quantity[5];
int i=0; 
while(i<4)
{
 printf(" enter code,quantity,rate:");
 scanf("%s%d%f",a[i],&quantity[i],&rate[i]);
 i++;
}
      getch();
      
}