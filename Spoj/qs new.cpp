#include<conio.h>
#include<iostream>
using namespace std;

int arr[1000],r,s;

void quic(int p,int q)
{   int temp,key1,key2;

     key1=arr[p];
     key2=arr[q];
     if(key1<key2)
    {temp=key1;
     key1=key2;
     key2=temp;}
    int ct,ct1;
    ct=p;
    ct1=q;
    int i,j;
    
    for (i=p;i<=q;i++)
    {   j=q-i;
        if (arr[i]<key1 )
        {
           temp=arr[ct];
           arr[ct]=arr[i];
           arr[i]=temp;
           ct++;
        }
        if (arr[j]>key2 )
        {
           temp=arr[ct1];
           arr[ct1]=arr[j];
           arr[j]=temp;
           ct1--;
        }
           
    }
       r=ct;
       s=ct1; 

}
             
void qs(int p,int q)
{  
     if (p<q){
              
             cout<<"hello\n";
             quic(p,q);
             int x=r,y=s;
             if(q==p+1 && arr[p]<arr[q]);
             else{
             qs(p,x-1);
             qs(x,y-1);
             qs(y,q);
             
             }
             }
}

int main()
{
    int i,n;                 //printf("How many no. u want to enter: ");
    cin>>n;
                             //scanf("%d",&n)     //srand(time(0));
    for (i=0;i<n;i++)
    {                        // arr[i]=rand();
       cin>>arr[i];          //cout<<arr[i]<<" ";  //scanf("%d",&arr[i]);   //printf("%d ",arr[i]);
    }
    cout<<"\n";
    int p=0,q=n-1;
    qs(0,n-1);
                             //printf("%d",arr[0]); //getchar();
    for (i=0;i<n;i++){cout<<arr[i]<<" ";  //printf("%d ",arr[i]); 
    }
    
    getch();
    return 0;
}
