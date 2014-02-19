#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    int l,flag,count=0;
    char a[500000];
    while(gets(a))
    {     count=0;
          flag=0;
          l=strlen(a);
          //cout<<"L: "<<l;
          for(int i=0;i<l;i++)
          {
                if(isalpha(a[i]) && flag==0)
                {count++;
                 flag=1;
                }
                if(a[i]==' ')
                flag=0;
          }
          cout<<count<<"\n";
    }
     

    return 0;
}
          
                                      
    
    
