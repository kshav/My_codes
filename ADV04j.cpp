#include<iostream>
using namespace std;

int main()
{
    int k=0,t,k1=0;
    long long int n,sum;
    cin>>t;
    while(k<t)
    {sum=0;
      cin>>n;
      while(k1==0)
      {
        if(n==3 || n==4)
        {sum+=3;
         break;}
         else
        {
            if(n%2==0)
            {n=n/2;
            sum++;}
            else
            {n=(n+1)/2;
             sum++;}
        }
      }
      cout<<sum<<"\n";
      k++;
    }
    system("pause");
    return 0;
}
       
                                  
                
    
