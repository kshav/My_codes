#include<iostream>
using namespace std;

int main()
{
    int t=0,n,l,k;
    long long int s;
    scanf("%d",&n);
    while(t<n)
    { s=1;
      scanf("%d%d",&l,&k);
      for(int i=0;i<k;i++)
      {
              s=(s*(10+i))/(i+1);
      }
      cout<<l<<" "<<s<<"\n";
      t++;    
    } 
    //system("pause");
    return 0;
}                   
