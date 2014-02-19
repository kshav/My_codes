#include<iostream>
#include<list>
#include<conio.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x;
    cin>>y;
    list<int>a,b;
    while(x!=0)
   {
   a.push_back(x%10);
   x=x/10;
   }
   while(y!=0)
   {
   b.push_back(y%10);
   y=y/10;
   }
   a.reverse();
   b.reverse();
   list<int>::iterator pos,ps;
   pos=a.begin();
   ps=b.begin();
   int d=0,k=0,flag=0;
   while(pos!=a.end()&&ps!=b.end())
   {
   k=0;
    k=*pos+*ps+d;
    pos++;
    ps++;
    d=k/10;
    k=k%10;
    if(k==0&&flag==0);
     else 
    {
    cout<<k;
    flag=1;
    }
    }
    while(pos!=a.end()){
    cout<<*pos+d;
    d=0;
    pos++;}
   while(ps!=b.end()){
   cout<<*ps+d;
   d=0;
   pos++;}
   if(k!=0)
   cout<<k;
    getch();
    return 0;
}
    
    
