#include<iostream>
using namespace std;

int lcm(int &a,int &b, int &d, int &j)
{
     while(a>1 && j<a || a>1 && j<b || j<b  && b>1 || j<a || b>1  )
     {
          if(a%j==0 && b%j==0)
          {//cout<<"Hey: \n"; 
          d=d*j;
          a=a/j;
          b=b/j;
          lcm(a,b,d,j);}     
          else if(a%j==0 && b%j!=0)
          {d=d*j;
          a=a/j;
          lcm(a,b,d,j);}                              
          else if(a%j!=0 && b%j==0)
          {d=d*j;
          b=b/j;
          lcm(a,b,d,j);}
          else
          {j++;
          lcm(a,b,d,j);}}
          return d;
}     

int main()
{
    int loops,t=0,a,b,d,j;
    scanf("%d",&loops);
    while(t!=loops)
    {
       d=1,j=2;            
       scanf("%d",&a);
       scanf("%d",&b);
       if(a==1)
       cout<<b;
       else if(b==1)
       cout<<a;
       else{
       lcm(a,b,d,j);
       cout<<d;}
       t++;
    }
    system("pause");
    return 0;
}
    
                   
    
