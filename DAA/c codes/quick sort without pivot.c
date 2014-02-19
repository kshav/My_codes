#include<stdio.h>
#include<time.h>
int part(int  a[],int p,int q)//function to fix key to it's proper position
{
   int x=a[q],i=p,j,temp;
   for(j=p;j<=(q-1);j++)
    {
      if(a[j]<=x)
      {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
       i++;
      }
    }
  temp=a[i];
  a[i]=a[q];
  a[q]=temp;
  return(i);
}
void qs(int a[],int p,int q)//function to find kth largest element
{
     if(p<q)
     {
      int r=part(a,p,q);
      qs(a,p,r-1);
      qs(a,r+1,q);
     }
}
main()
{
      clock_t t1;
    int a[10],i,n,j;
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
     printf("%d ",a[i]);
    int d,temp;
    printf("\nenter pivot\n");
    scanf("%d",&d);
    i=0;
    // int x=a[q],i=p,j,temp;
   for(j=0;j<=9;j++)
    {
      if(a[j]<=d)
      {
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
       i++;
      }
    }
    
    
    qs(a,0,i);
    qs(a,i+1,9);
    printf("\n");
    for(i=0;i<10;i++)
    printf("%d ",a[i]);
    clock_t t2;
    printf("\n%d",t2-t1);
    system("pause");
}
    
