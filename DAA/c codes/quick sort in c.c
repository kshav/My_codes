#include<stdio.h>
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
    int a[10],i,n;
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
     printf("%d ",a[i]);
    qs(a,0,9);
    printf("\n");
    for(i=0;i<10;i++)
    printf("%d ",a[i]);
}
    
