#include<stdio.h>
main()
{
    int count=0,l,k=1,flag=1,i;
    char s[100000];
    
    while(scanf("%s",&s)!=EOF)
    {   count=0;
        flag=1; 
        i=0;
        while(s[i]!='\0')
        {
          if(s[i]=='0' && flag==0)
          {count++;
           flag=1;}
          else if(s[i]=='1' && flag==1)
          {count++;
           flag=0;}
           i++;
        }
        printf("Game #%d: %d\n",k,count);
         k++;
    }
}
