#include<iostream>
using namespace std;

int main()
{
    long long int t=0,n,k,sum,row,temp;
    cin>>k;
    while(t<k)
    {
      cin>>n;
      if(n==1)
      cout<<"poor conductor\n";
      else{
      row=(n-2)/5+1; 
      if(n%10==0 || n%10==1)
      {
         temp=n/10-1;
         n=n-10*temp;
      }
      else
      {
          temp=n/10;
          n=n-10*temp;
      }
      if(n==2 || n==11)
      cout<<row<<" W L\n";
      else if(n==3 || n==10)
      cout<<row<<" A L\n";
      else if(n==4 || n==9)
      cout<<row<<" A R\n";
      else if(n==5 || n==8)
      cout<<row<<" M R\n";
      else if(n==6 || n==7)
      cout<<row<<" W R\n";
      } 
      t++;
    }
   // system("pause");
    return 0;
}         
