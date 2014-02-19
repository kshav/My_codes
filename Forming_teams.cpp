#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{

   int i,m,n,color=0,kk,a,b,cnt=0;
   scanf("%d%d",&n,&m);
   int x[m],y[m];
   int tick[n+1][2];

   for(i=0;i<n+1;i++)
   {
   	tick[i][0]=0;
   	tick[i][1]=-1;
   }
   
   for(i=0;i<m;i++)
   {
   	scanf("%d%d",&x[i],&y[i]);
   	if(x[i]>y[i])
   	swap(x[i],y[i]);
   }

   for(i=0;i<m;i++)
   {
   	 
   	 if(tick[x[i]][0] == 0 && tick[y[i]][0] == 0)
       {
     	   tick[x[i]][0] = tick[y[i]][0] = 1;
           tick[x[i]][1] = tick[y[i]][1] = color;
           color++;
       }
     
     else if(tick[x[i]][0] == 1 && tick[y[i]][0] == 0 )
       {
     	   tick[y[i]][0] = 1;
           tick[y[i]][1] = tick[x[i]][1]; 
       }

     else if(tick[x[i]][0] == 0 && tick[y[i]][0] == 1 )
       {
     	   tick[x[i]][0]  = 1;
           tick[x[i]][1] = tick[y[i]][1]; 
       }
      
     else if(tick[x[i]][0] == 1 && tick[y[i]][0] == 1)
       {
     	   if(tick[x[i]][1] != tick[y[i]][1])
            {   
            	a = tick[x[i]][1];
            	b = tick[y[i]][1];
            	kk = min(a,b);
                
                for(int t=0;t<n+1;t++)
                {
                    if(tick[t][1]==a || tick[t][1]==b)
                    tick[t][1] = kk;	
                }
            }
             

            else
            {	

            	int hp = tick[x[i]][1],count=0;
            	for(int h=1;h<n+1;h++)
            	if(tick[h][1]==hp)
            	count++;
            	if(count%2!=0)	
                cnt++;	
            }

       }
   }
   if((n-cnt)%2==0)
   printf("%d",cnt);
   else
   printf("%d",cnt+1);	
   return 0;


}