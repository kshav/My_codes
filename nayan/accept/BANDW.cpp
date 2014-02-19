#include<iostream>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    while(s[0]!='*'&&t[0]!='*')
    {
    int c=0,i=0,flag=0;
    for(i=0;i<s.length();i++)
    {
    if(s[i]!=t[i])
    flag=1;
    else if(flag==1)
    {
     c++;
     flag=0;
    }
    }
    if(flag==1)c++;
    cout<<c<<"\n";
    cin>>s>>t;
    }
    return 0;
}
