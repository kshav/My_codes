#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int n,t=0,l,flag=0;
    long long int a,b;
    char temp;
    string s;
    cin>>n;
    char ch=getchar();
    while(t<n)
    {    a=b=flag=0;
         getline(cin,s);
         l=s.size();
         //cout<<l;
         for(int i=0;i<l;i++)
         {
            if(s[i]!=' ')
            {     
            if (flag==0 && (s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'))
            {flag=1;
             temp=s[i];}     
            else if(flag==0)     
            a=a*10+s[i]-48;
            else if(flag==1 && (s[i]!='+' || s[i]!='-' || s[i]!='*' ||s[i]!='/'  ))
            b=b*10+s[i]-48;
            else if(flag==1 && (s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'))
            {
                 //cout<<a<<" "<<b;
                 if(temp=='+')
                 a=a+b;
                 else if(temp=='-')
                 a=a-b;
                 else if(temp=='*')
                 a=a*b;
                 else if(temp=='/')
                 a=a/b;
                 b=0;
                 temp=s[i];
            }
            else if(s[i]=='=')
            {
                  if(temp=='+')
                 a=a+b;
                 else if(temp=='-')
                 a=a-b;
                 else if(temp=='*')
                 a=a*b;
                 else if(temp=='/')
                 a=a/b;
                 cout<<a<<"\n";
            }
            }
         }
         t++;             
    }
    system("pause");
    return 0;
}   
