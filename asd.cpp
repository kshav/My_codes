#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    string  a[101];
   for(int i=0;i<100;i++)
   for(int j=0;j<100;j++)
   a[i][j]=' ';
int x=0;
    
    int i=0,j=0;
    while(getline(cin,a[i])){
       
      if(x<a[i].size())
       x=a[i].size();
i++;
}
    for(int k=0;k<x;k++)
    {
     for(int j=i-1;j>=0;j--)
     {if(k>=a[j].size())
      cout<<" ";
      else
      cout<<a[j][k];
     }
     cout<<"\n";
    }
    return 0;
}
                                 
