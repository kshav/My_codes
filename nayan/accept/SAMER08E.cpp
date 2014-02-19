#include<stdio.h>
main()
{
    int n,d,m,y,f=1,i,d1,m1,y1,count;
    long long int sum=0,c,c1;
    scanf("%d",&n);
    while(n!=0)
    {
               f=1;
               sum=0;
               count=0;
               scanf("%d%d%d%lld",&d,&m,&y,&c);
               for(i=0;i<n-1;i++)
               {
               if(d>=1&&d<=27)
               d++;
               else if(d==30)
               {
                 if(m==4||m==6||m==9||m==11)
                 {
                    d=1;
                    m++;
                 }
                    else 
                    d++;
               }
               else if((d==31)&&(m==1||m==3||m==5||m==7||m==8||m==10))
               {
                    d=1;
                    m++;
               }
               else if(d==31&&m==12)
               {
                    d=1;
                    m=1;
                    y++;
               }
               else if((d==28||d==29)&&(m!=2))
               d++;
               else
               { 
                   if(y%4==0)
                  {
                  if(y%100==0)
                  {
                  if(y%400==0)
                  f=1;
                  else
                  f=0;
                  }
                  f=1;
                  if(f==0){
                  d=1;m++;}
                  else if(d==29){
                  d=1;
                  m++;}
                  else
                  d++;
                  }
                  else{
                  d=1;m++;}
                  
                  }
               scanf("%d%d%d%lld",&d1,&m1,&y1,&c1);
               if(d1==d&&m1==m&&y1==y)
               {
               count++;
               sum+=(c1-c);
               }
               d=d1;
               m=m1;
               y=y1;
               c=c1;
    }
    printf("%d %lld\n",count,sum);
    scanf("%d",&n);
   }           
}              
               
                 
