#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
    int i=0,n=0,count=0,count1=0,q=0;
    char a[1001];
    while(scanf("%s",&a)!=EOF)
    {
     n=strlen(a);count=1;count1=0;
     if(islower(a[0]))
     q=1;
     else
     q=0;
      for(i=1;i<n;i++)
      {
         if(islower(a[i]))
         {
          if(q==1)q=0;
          else {q=1;count++;}  
         }
         else
         {
          if(q==1){q=0;count++;}
          else q=1;
         }               
      }
      if(islower(a[0]))
      q=0;
      else
      q=1;
      for(i=1;i<n;i++)
      {
       if(islower(a[i]))
         {
          if(q==1)q=0;
          else {q=1;count1++;}  }
         else
         {
          if(q==1){q=0;count1++;}
          else q=1;
         }  
      }
     if(count>count1)count=count1;
      printf("%d\n",count);
    }
}
        
