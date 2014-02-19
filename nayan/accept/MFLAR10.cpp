#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    while(s[0]!='*')
    {
    char a=tolower(s[0]);
    int i,flag=0;
    for(i=1;i<s.length();i++)
    {
    if(s[i]==' ')
    {
    if(tolower(s[i+1])!=a)
    {
    flag=1;
    break;
    }
    } 
    }
    if(flag==0)
    cout<<"Y\n";
    else
    cout<<"N\n";
    getline(cin,s);
    }
    return 0;
}
    
