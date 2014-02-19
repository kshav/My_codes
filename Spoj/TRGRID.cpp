#include<iostream>
using namespace std;

int main()
{
    int t=0,k;
    scanf("%d",&k);
    long long int a,b;
    while(t<k) 
    {
      scanf("%lld%lld",&a,&b);
      if(a%2==0 && b%2==0)
      {
           if(b>=a)
           cout<<"L\n";
           else
           cout<<"U\n";
      }
      else if(a%2!=0 && b%2!=0)
      {
           if(b>=a)
           cout<<"R\n";
           else
           cout<<"D\n";
      }
      else if(a%2==0 && b%2!=0)
      {
           if(b>a)
           cout<<"L\n";
           else
           cout<<"D\n";
      }
      else
      {
          if(b>a)
          cout<<"R\n";
          else
          cout<<"U\n";
      }
      t++;
    }
    //system("pause");
    return 0;
}              
