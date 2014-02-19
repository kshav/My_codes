#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int s,t;
void part(int  a[],int p,int q)//function to fix key to it's proper position
{
   int i,l=p+1,k=p+1,g=q-1,temp,x,y;
   if(a[p]<a[q]){
    x=a[p];y=a[q];}
    else
    {temp=a[p];
    a[p]=a[q];
    a[q]=temp;}
    x=a[p];y=a[q];
    for(i=p+1;i<=g;i++)
    {
    if(a[i]<=x)
    {
    temp=a[l];
    a[l]=a[i];
    a[i]=temp;   //  swap(a[l],a[i]);
               l++;
              if(k==i)
              k++;
              else
              i--;
    }
    else if(a[i]>x&&a[i]<=y)
    k++;
    else
    {
        temp=a[i];
    a[i]=a[g];
    a[g]=temp;    //swap(a[i],a[g]);
    i--;
    g--;
    }
    }
    temp=a[p];
    a[p]=a[l-1];
    a[l-1]=temp;   //swap(a[p],a[l-1]);
    temp=a[q];
    a[q]=a[g+1];
    a[g+1]=temp;   //swap(a[q],a[g+1]);
    s=l-1;
    t=g+1;
  
}
void qs(int a[],int p,int q)
{
     if(p<q)
     {
      part(a,p,q);
      int b=s,c=t;
      qs(a,p,b-1);
      qs(a,b+1,c-1);
      qs(a,c+1,q);
     }
}
main()
{
    int i,n;
    printf("Enter total number of variables ");
    scanf("%d",&n);
    int a[n];
    srand(time(0));
    for(i=0;i<n;i++)
    {
    a[i]=rand()%100;
    printf("%d ",a[i]);
    }
    printf("\n");
    qs(a,0,n);
   
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    system("pause");
}
    
