#include<iostream>
using namespace std;

int main()
{
    int n,t=0,j,cnt=0,a,b;
    cin>>n;
    while(t<n)
    {       cnt=0;
           for(int i=0;i<10;i++)
           {       
                   cin>>j;
                   if(j==1)    
                   cnt++;
           }
           j=10-cnt;
          // cout<<j;
           a=(j*(j-1))/2;
           b=(j*(j-1)*(j-2))/3;
           a=45-a;
           b=120-b;
           if((a+b)%2==0)
           cout<<"0"<<"\n";
           else
           cout<<"1"<<"\n";
           t++;
    }
    //system("pause");
    return 0;
} 
           
              
