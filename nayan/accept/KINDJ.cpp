#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int l,i,count=0,q=1;
    string s;
    while(getline(cin,s,'\n'))
    {
     count=0;
     l=s.length();
     for(i=0;i<l;i++)
     {
     if(isalpha(s[i])){
     count++; q=1; }
     if(q==1){  
     for(i=i+1;i<l;i++)
     {
     if(!isalpha(s[i]))
     break;q=0;
     }
     }}
     cout<<count<<"\n";                  
    }
return 0;
}
