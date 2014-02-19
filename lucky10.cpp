#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{
    int t,i,len,k,cnt7=0,cnt4=0,j,l;
   char a[20001],b[200001],s[200001]={};
    int c[4],d[4];
    scanf("%d",&t);
    while(t--)
    {scanf("%s%s",&a,&b);
     //s[200001]={};
     cnt7=0;
     cnt4=0;
     for(i=0;i<4;i++)
     c[i]=d[i]=0;
     len=strlen(a);
     
     for(i=0;i<len;i++)
     {k=a[i]-48;
      if(k<4)
      c[0]++;
      else if(k==4)
      c[1]++;
      else if(k>4 && k<7)
      c[2]++;
      else if(k==7)
      c[3]++;
     }
     
     for(i=0;i<len;i++)
     {k=b[i]-48;
      if(k<4)
      d[0]++;
      else if(k==4)
      d[1]++;
      else if(k>4 && k<7)
      d[2]++;
      else if(k==7)
      d[3]++;
     }
     
     

     if(c[3]>0)
      { 
        if(c[3]>=d[2])
        {c[3]=c[3]-d[2];
         cnt7+=d[2];
         d[2]=0;}
        else
        {d[2]=d[2]-c[3];
            cnt7+=c[3];
          c[3]=0;}
      }
      if(c[3]>0)
      { 
        if(c[3]>=d[0])
        {c[3]=c[3]-d[0];
         cnt7+=d[0];
         d[0]=0;}
        else
        {d[0]=d[0]-c[3];
            cnt7+=c[3];
          c[3]=0;}
      }
      if(c[3]>0)
      { 
        if(c[3]>=d[1])
        {c[3]=c[3]-d[1];
         cnt7+=d[1];
         d[1]=0;}
        else
        {d[1]=d[1]-c[3];
            cnt7+=c[3];
          c[3]=0;}
      }
      if(c[3]>0)
      { 
        if(c[3]>=d[3])
        {c[3]=c[3]-d[3];
         cnt7+=d[3];
         d[3]=0;}
        else
        {d[3]=d[3]-c[3];
            cnt7+=c[3];
          c[3]=0;}
      } 
      
      for( i=0;i<4;i++)
     swap(c[i],d[i]);
     
        if(c[3]>0)
      { 
        if(c[3]>=d[2])
        {c[3]=c[3]-d[2];
         cnt7+=d[2];
         d[2]=0;}
        else
        {d[2]=d[2]-c[3];
            cnt7+=c[3];
          c[3]=0;}
      }
      if(c[3]>0)
      { 
        if(c[3]>=d[0])
        {c[3]=c[3]-d[0];
         cnt7+=d[0];
         d[0]=0;}
        else
        {d[0]=d[0]-c[3];
            cnt7+=c[3];
          c[3]=0;}
      }
      if(c[3]>0)
      { 
        if(c[3]>=d[1])
        {c[3]=c[3]-d[1];
         cnt7+=d[1];
         d[1]=0;}
        else
        {d[1]=d[1]-c[3];
            cnt7+=c[3];
          c[3]=0;}
      }
      if(c[3]>0)
      { 
        if(c[3]>=d[3])
        {c[3]=c[3]-d[3];
         cnt7+=d[3];
         d[3]=0;}
        else
        {d[3]=d[3]-c[3];
            cnt7+=c[3];
          c[3]=0;}
      } 
     
     if(c[1]>0)
      { 
        if(c[1]>=d[0])
        {c[1]=c[1]-d[0];
         cnt4+=d[0];
         d[0]=0;}
        else
        {d[0]=d[0]-c[1];
            cnt4+=c[1];
          c[1]=0;}
      }

      if(c[1]>0)
      { 
        if(c[1]>=d[1])
        {c[1]=c[1]-d[1];
         cnt4+=d[1];
         d[1]=0;}
        else
        {d[1]=d[1]-c[1];
            cnt4+=c[1];
          c[1]=0;}
      }
      
       for( i=0;i<4;i++)
     swap(c[i],d[i]);
 
         if(c[1]>0)
      { 
        if(c[1]>=d[0])
        {c[1]=c[1]-d[0];
         cnt4+=d[0];
         d[0]=0;}
        else
        {d[0]=d[0]-c[1];
            cnt4+=c[1];
          c[1]=0;}
      }

      if(c[1]>0)
      { 
        if(c[1]>=d[1])
        {c[1]=c[1]-d[1];
         cnt4+=d[1];
         d[1]=0;}
        else
        {d[1]=d[1]-c[1];
            cnt4+=c[1];
          c[1]=0;}
      }
  
      
     // cout<<cnt7<<" "<<cnt4<<"\n\n";
   //   printf("%s\n",s);
      for( j=0;j<cnt7;j++)
      s[j]='7';
      l=j;
      for(k=0;k<cnt4;k++)
      s[k+l]='4';
      if(cnt7==0 && cnt4==0)
      s[0]='\0';
      printf("%s\n",s);
      }
     // system("pause");
      return 0;
}
