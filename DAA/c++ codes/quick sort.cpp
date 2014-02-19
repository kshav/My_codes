#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
int part1(int  a[],int p,int q)//function to fix key to it's proper position ,taking pivot from ending
{
   int x=a[q],i=p;
   for(int j=p;j<=(q-1);j++)
    {
      if(a[j]<=x)
      {
       swap(a[i],a[j]);
       i++;
      }
    }
  swap(a[i],a[q]);
  return(i);
}

int part2(int  a[],int p,int q)//function to fix key to it's proper position from taking pivot from starting
{
   int x=a[p],i=p+1;
   for(int j=p+1;j<=q;j++)
    {
      if(a[j]<=x)
      {
       swap(a[i],a[j]);
       i++;
      }
    }
  swap(a[i-1],a[p]);
  return(i-1);
}

void qs(int a[],int p,int q)//function to find kth largest element,from ending
{
     if(p<q)
     {
      int r=part1(a,p,q);
      qs(a,p,r-1);
      qs(a,r+1,q);
     }
}

void qs1(int a[],int p,int q)//function to find kth largest element from starting
{
     if(p<q)
     {
      int r=part2(a,p,q);
      qs1(a,p,r-1);
      qs1(a,r+1,q);
     }
}

void merge(int a[], int b[], int p, int q)
{
     int x[p+q],k=0,i,j;
      
     for( i=0,j=0;i<p && j<q ; )
     {
             if(a[i]<=b[j])
             {x[k]=a[i];
              i++;
              k++;}
             else
             {x[k]=b[j];
              j++;
              k++;}
     }
     
     for(;i<p;)
     {x[k]=a[i];
      k++;
      i++;
     }  
 
     for(;j<q;)
     {x[k]=b[j];
      k++;
      j++;
     }
     
     cout<<"MERGE ARRAY\n\n";
     
     for(int i=0;i<k;i++)
     cout<<x[i]<<" ";
     //for(i=0;i<k;i++)
     //a[i+p]=x[i];

}

int main()
{   
    int i,n,n1;
    clock_t t1,t2;
    t1=clock();
    cout<<"For 1st array N =  "; // from ending
    cin>>n;
    int a[n];
    srand(time(0));
    for(i=0;i<n;i++)
    a[i]=rand()%100;
    for(i=0;i<n;i++)
     cout<<a[i]<<" ";
    qs(a,0,n-1);
    cout<<"\n";
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<"\n\n";
    
    
    cout<<"For 2nd array N =  "; // from starting
    cin>>n1;
    int a1[n1];
    srand(time(0));
    for(i=0;i<n1;i++)
    a1[i]=rand()%100;
    for(i=0;i<n1;i++)
     cout<<a1[i]<<" ";
    qs1(a1,0,n1-1);
    cout<<"\n";
    for(i=0;i<n1;i++)
    cout<<a1[i]<<" ";
    
    cout<<"\n\n";
    
    merge(a,a1,n,n1);
    t2=clock();
    cout<<"\n\n";
    cout<<"Total time taken: "<<(t2-t1)/CLOCKS_PER_SEC;
    
    getch();
    return 0;
}
    
