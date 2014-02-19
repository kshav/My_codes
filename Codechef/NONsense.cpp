#include<iostream>
using namespace std;

int main()
{
    int n=0,k,t=0,l=0;
    char a;
    string word;
    cin>>k;
    while(t<k){
    cin>>word;
    l=word.size();           
    for(int i=0;i<l;)
    {
           n=0;
            while(n<32){
            n=n*10+word[i]-48;
            i++;
            }
            a=char(n);
            cout<<a;
    }
    cout<<"\n";
    t++;
    }
    system("pause");
    return 0;
}
            
            
            
