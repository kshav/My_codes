#include<iostream>
#include<math.h>
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
    int n,t=0,power;
    long long int gh,k,p,q,sum;
    cin>>n;
    while(t<n)
    {   sum=0;
        cin>>gh; 
        for(int i=1;i<61;i++)
        {
                k= int(pow(2,i));
                if(k==gh)
                {power=i;
                 break;}
        }
        
        for(int j=2;j<=power;j++)
        {      
                if(j%2==0)
                {
                   p=fact(j-1);
                   q=fact((j/2) - 1);
                   cout<<p<<" "<<q<<"\n";
                   if(j!=0 && q!=0) 
                   sum=sum+((2*p)/(j*q*q));
                }
        }
        if(gh==2)
        sum++;
        cout<<sum<<"\n";       
        t++;
    }
    system("pause");
    return 0;
}
                             



