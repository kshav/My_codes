#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    float l,count=0,sc=0,c,d;
     l=a.size();
  
    for(int i=0;i<l;i++)
    {
            if(a[i]=='0' && i!=(l-1))
            {
                       count++;   
                       
                       if(a[i+1]=='0')
                       sc++;
            }
            if(a[i]=='0' && i== (l-1) )
            {    
                
                       count++;
                       if(a[0]=='0')
                       sc++;
            }
    }
    c=sc/count;
    d=count/l;
  
    if(c==d)
    cout<<"EQUAL\n";
    else if(c<d)
    cout<<"ROTATE\n";
    else
    cout<<"SHOOT\n";
    
    return 0;
}
