#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    string a[4];
    int word[4]={0};
   long long int ans;
    
    for(int i=0;i<4;i++)
    cin>>a[i];
    
    for(int i=0;i<4;i++)
    {
            if(a[i]=="white")
            word[i]=9;
            else if(a[i]=="black")      
            word[i]=0;              
            else if(a[i]=="blue")      
            word[i]=6;
            else if(a[i]=="red")      
            word[i]=2;
            else if(a[i]=="brown")      
            word[i]=1;
            else if(a[i]=="orange")      
            word[i]=3;
            else if(a[i]=="yellow")      
            word[i]=4;
            else if(a[i]=="green")      
            word[i]=5;
            else if(a[i]=="violet" || a[i]=="purple")      
            word[i]=7;
            else if(a[i]=="grey")      
            word[i]=8;
    
    }
    ans=(4096*word[0]+256*word[1]+16*word[2]+word[3]);
   // cout<<ans<<" ";
    //out<<word[3]<<" ";
    ans=ans*pow(10,word[3]);
    cout<<ans<<" Guntur\n";
    //system("pause");
    return 0;
}
