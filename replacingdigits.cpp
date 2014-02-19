#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int c,d,flag=1,flag2=1;
    string j,k;
    cin>>j>>k;
    c=j.size();
    d=k.size();
    
    int status[d];
    for(int i=0;i<d;i++)
    status[i]=0;
    int pos;
    int max='-1';
    while(flag==1)
    {max=-1,pos=-1;
    flag2=1;
   
    for(int i=0;i<d;i++)
    {
            if(k[i]>max && status[i]==0)
            {max=k[i];
             flag2=0;
             pos=i;
     
            }
    }
    if(flag2==1)
    break;
    flag=0;
    for(int p=0;p<c;p++)
    {
     if(max>j[p])
     { j[p]=max;
     
       status[pos]=1;
       flag=1;
       break;
     }
    }
    
    }
    cout<<j<<"\n";

                    

    //system("pause");
    return 0;
}
