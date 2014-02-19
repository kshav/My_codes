#include<iostream>
using namespace std;

int main()
{
    long int a,b,m=0,n,sum;
    scanf("%lu",&a);
    int i=0;
    while(i<a)
    {
          scanf("%lu",&b);
          
           if(b==1)
           {
               printf("1\n");
           }
           else{    
           sum=0;
           int j=2;
           while(j<b)
           {
                   if(b%j==0)
                   {
                      if(m==j)
                      break;
                      sum=sum+j;
                      m=b/j;
                      sum=sum+m;
                   }
                   j++;
           }
           
           printf("%lu\n",sum+1);
           }
    i++;
    }
    
    return 0;
}       
