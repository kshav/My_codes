#include<iostream>
using namespace std;

int main()
{
    string a,b;
    int l1,l2;
    cin>>a>>b;
    int cnt[26]={0};
    l1=a.size();
    l2=b.size();
    for(int i=0;i<l1;i++)
    {
         cnt[a[i]-97]++;
    }
    for(int i=0;i<l2;i++)
    {
         cnt[b[i]-97]=0;
    }
    for(int i=0;i<26;i++)
    {
         if(cnt[i]!=0)
         cout<<char(i+97)<<cnt[i];
    }
    cout<<"\n";
    //system("pause");
    return 0;
}   
