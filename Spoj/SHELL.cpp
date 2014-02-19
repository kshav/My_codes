#include<string>
#include<iostream>
using namespace std;

int main()
{
    string a,b,c,m;
    int k,flag=0,t=0;
    cin>>a>>k;
    m=a;
    if(a=="left")
    flag=-1;
    else if(a=="center")
    flag=0;
    else
    flag=1;    
    while(t<k)
    {
      cin>>b>>c;
      if(m==b)
      { if(c=="left")
        {flag=-1;
         m=c;}
        else if(c=="center")
        {flag=0;
         m=c;}
        else
        {flag=1;
         m=c;}
      }
      else if(m==c)
      { if(b=="left")
        {flag=-1;
         m=b;}
        else if(b=="center")
        {flag=0;
         m=b;}
        else
        {flag=1;
        m=b;}
      }
      t++;
    }
    if(flag==-1)
    cout<<"left\n";
    else if(flag==0)
    cout<<"center\n";
    else
    cout<<"right\n";
    system("pause");
    return 0;
}

       
               
