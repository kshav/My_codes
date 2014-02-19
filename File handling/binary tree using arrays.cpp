#include<iostream>
using namespace std;

int l,a[20],b[20];
void insert();
void pqueue(); 


int main()
{
    int i=1,t;
    char b;
    cout<<"Enter the value: ";
    cin>>a[i];

    do
    {
              
              i++;
              l=i;
              cout<<"\nEnter the value:  ";
              cin>>a[i];
              insert();
              cout<<"\nDo you want to continue: ";
              cin>>b;
              t=i;
    }while(b=='y'||b=='Y');
    cout <<"\n\nThe values are";
    for(int j=1;j<=t;j++)
    cout<<a[j]<<" ";
    cout<<"\n";
    system("pause");
    return 0;
    
}
void insert()
{
     while(l>1)
     {         
      if(a[l]>a[l/2])
      {swap(a[l],a[l/2]);
      l=l/2;}
      else
      break;
     }
}


void pqueue()
{
     int j=0;
     b[j]=a[1];
     a[1]=a[t];
     t--;
     if(a[2t]>a[2t+1])
     {
           if(a[2t]>a[t])
           swap(a[2t],a[t])                           
     }
     else if(a[2t]<a[2t+1])
     {
          if(a[2t+1]>a[t])
          swap(a[2t+1],a[t])
     } 
     
