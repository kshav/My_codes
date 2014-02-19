#include<iostream>
using namespace std;
int main()
{
    int test,c,i,cn;
    cin>>test;
    string s;
    while(test--)
    {
    cin>>s;
    cn=0;
    for(i=0;i<s.length();i++)
    {
    c=s[i]-48;
    if(c!=4&&c!=7)
    cn++;
    }
    cout<<cn<<"\n";
   }
   return 0;
}
