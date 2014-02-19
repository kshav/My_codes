#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;


int main()
{
    int l;
    string k;
    cout<<"Enter name: ";
    getline(cin,k);
    l=k.size();
    char a[l];
    int b[l];
  //  a[0]=0;
    for(int i=0;i<l;i++)
    b[i]=1;
  
    int m=0,flag=0;
    for(int i=0;i<l;i++)
    {
      if(k[i]!=' '){      
      if(m==0){
      a[m]=k[i];
      m++;}
      else
      {
       flag=0;   
      for(int j=0;j<m;j++)
      {
              if(k[i]==a[j])
              {
                  b[j]++;
                  flag=1;                      
              }
      }
              if(flag==0)
              {
                a[m]=k[i];
                m++;
              }
      }
    }}
    cout<<"\n\n";
    for(int j=0;j<m;j++)
    cout<<a[j]<<"   "<<b[j]<<"\n\n";
    getch();
    return 0;
}
                               
          
              

