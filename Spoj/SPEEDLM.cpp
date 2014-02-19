#include<iostream>
using namespace std;

int main()
{
    int t=0,a,b,c,d=0,e=0,f=0;;
    while(t==0)
    {
     d=e=f=0;          
     scanf("%d",&a);
     if(a==-1)
     break;
     for(int i=0;i<a;i++)
     {scanf("%d%d",&b,&c);
      e=c-f;
      f=c;
      d=d+e*b;
     }
     cout<<d<<" miles\n";
    }
     //system("pause");
    return 0;
}
    
     
      
               
               

