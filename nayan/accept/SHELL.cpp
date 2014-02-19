#include<iostream>
using namespace std;
int main()
{
    string a,f,g;
    int b,n;
    cin>>a;
    cin>>n;
    if(n==10)
    return 0;
    for(int i=0;i<n;i++)
    {
      cin>>f>>g;
      if(f==a)
      a=g;
      else if(g==a)
      a=f;      
    }
    cout<<a<<"\n";
    return 0;
}
