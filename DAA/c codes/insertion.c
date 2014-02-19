#include<stdio.h>
#include<time.h>
void inst(int a[],int n)
{
     int i,j,k;
     for(i=1;i<n;i++)
     {
     for(j=i-1;j>=0;j--)
     {
     if(a[j+1]<a[j]){
     k=a[j+1];
     a[j+1]=a[j];
     a[j]=k;}
     else
     break;
     }
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
    clock_t t1,t2;
    int i,n,c;
    printf("enter total number of elements ");
    scanf("%d",&n);
    int a[n];
    srand(time(0));
    for(i=0;i<n;i++)
    a[i]=rand()%100;
    t1=clock();
    inst(a,n);
    t2=clock();
    display(a,n);
    printf("\n%d\n",(t2-t1));
    system("pause");
}
