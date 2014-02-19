#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int l,j,t=0,c=0,i;
    string k;
    while(t==0)
    {     
          if(c==10 || c==32)
          break;
          cin>>k;
          i=0;
          l=0;
          while(k[i]!='\0')  
          {
              l++;
              i++;
          }          
          if(k[l-1]=='0' || k[l-1]=='5')
          printf("Yes\n\n");
          else
         printf("No\n\n");
          j=getchar();
          c=getchar();  
    }   
    system("pause");
    return 0;
}       


