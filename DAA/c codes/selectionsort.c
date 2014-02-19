#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void inst(int a[],int n)
{
     int small,pos,i,j,temp;
     for(i=0;i<n;i++)
     {
             small=a[i];
             pos=i;
             for(j=i+1;j<n;j++)
             {
             if(a[j]<=small)
             {
             small=a[j];
             pos=j;
             }
             }
             temp=a[i];
             a[i]=a[pos];
             a[pos]=temp;
     }
}
void display(int a[],int n)
{
     int i;
     for(i=0;i<n;i++)
     printf("%d ",a[i]);
}
main()
{
    clock_t clock_start,clock_end;
    int i,n,c;
    printf("enter total number of elements ");
    scanf("%d",&n);
    int a[n];
    srand(time(0));
    for(i=0;i<n;i++){
    c=rand()%100;
    a[i]=c;}
    clock_start=clock();
    inst(a,n);
    clock_end=clock();
    display(a,n);
    
    printf("\n%d\n",(clock_end-clock_start));
    system("pause");
}
