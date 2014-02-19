#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int t,k=0,n=1;
    scanf("%d",&t);
    while(k<t)
    {
     int m,l,i;
     cin>>m;
     //scanf("%d",&m);
     string a;
     cin>>a;
     //scanf("%s",&a);
     l=a.size();
     if(m<=l)
     {
      cout<<n++<<" ";
      for( i=0;i<m-1;i++)
      cout<<a[i];
     for(i=m;i<l;i++)
      cout<<a[i];  
      cout<<"\n"; 
     }    
     k++;  
    };
    getch();
    return 0;
}
    
