#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
  int n,x=0;
  char b[5];
  scanf("%d",&n);
  while(n--)
  {
  	
  	scanf("%s",&b);
  	if(b[0]==b[1]&& b[1]=='+')
  	{
  		++x;
  	}
  	else if(b[0]==b[1] && b[1]=='-')
  	{
  		--x;
  	}
  	else if(b[2]==b[1] && b[1]=='-')
  	{
  		x--;
  	}
  	else if(b[2]==b[1]&& b[1]=='+')
  	{
  		x++;
  	}
  }
  printf("%d\n",x);	
}
