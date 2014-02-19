#include<iostream>
#include<string.h>
using namespace std;

/*void bsort(char &a[][m],int &b[],int m)
{ 
     for(int i=0;i<m;i++)
    {
            for(int j=0;j<m-1;j++)
            {
                    if(b[j]<b[j+1])
                    {
                       swap(b[j],b[j+1]);
                       swap(a[j][],a[j+1][]);
                    }
            }
    } 
}*/






int main()
{
    int l;
    string k;
    cout<<"Enter name: ";
    getline(cin,k);
    l=k.size();
    char a[l][l];
    int b[l];
    for(int i=0;i<l;i++)
    b[i]=1;
  
    int m=0,flag=0;
    for(int i=0;i<l;i++)
    {
      if(k[i]!=' '){      
      if(m==0){
      a[m][0]=k[i];
      m++;}
      else
      {
       flag=0;   
      for(int j=0;j<m;j++)
      {
              if(k[i]==a[j][0])
              {
                  b[j]++;
                  flag=1;                      
              }
      }
              if(flag==0)
              {
                a[m][0]=k[i];
                m++;
              }
      }
    }}
  //  bsort(a,b,m);
    cout<<"\n\n";
    for(int j=0;j<m;j++)
    cout<<a[j][0]<<"   "<<b[j]<<"\n\n";
    return 0;
}
                               
          
              


