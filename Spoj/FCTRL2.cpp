#include<iostream>
using namespace std;

void recur(int &a,int arr[],int &m,int &temp,int &x)
{ 
     if(a>0){
     for(int j=0;j<m;j++)
     {
     x=arr[j]*a+temp;
     arr[j]=x%10;
     temp=x/10;
     }
     while(temp>0)
     {
     arr[m]=temp%10;
     temp=temp/10;
     m++;
     }
     a--;
     recur(a,arr,m,temp,x);
     a=-1;
     }
}
int main()
{
    int loops,t=0,a,arr[200]={0},m,temp=0,x=0;
    scanf("%d",&loops);
    while(t!=loops)
    {
    
           arr[0]=1;
           m=1;
           scanf("%d",&a);
           recur(a,arr,m,temp,x);      
//           cout<<"Number: ";
           for(int i=m-1;i>=0;i--)
           cout<<arr[i];
           cout<<"\n";
           t++;    
    }
    system("pause");
    return 0;
}       
    

   



