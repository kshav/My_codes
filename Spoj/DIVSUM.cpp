#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long int a,b,m,n,sum,i=0,j,s;
    scanf("%lu",&a);
    int flag;
    while(i<a)
    {
          scanf("%lu",&b);
          s=sqrt(b);
           if(b==1)
           {
               printf("0\n");
           }
           else{    
           sum=0;
           j=2;
           while(j<=s)
           {
                   if(b%j==0)
                   {
                        m=b/j;
                      if(j==m)
                      sum=sum+j;
                      else
                      {sum=sum+j;
                       sum=sum+m;}
                   }
                   j++;
           }
           
           printf("%lu\n",sum+1);
           }
    i++;
    }
    system("pause");
    return 0;
}       

