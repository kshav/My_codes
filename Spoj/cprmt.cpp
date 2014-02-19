#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int l1,l2,i=0,j=0;
    string d,b;
 //   cin>>d;
   // cin>>b;
     //cout<<l1<<l2;
   while(scaf("%S,%s",d,b)!=EOF)
   { l1=d.size();
    l2=b.size();
    char a='a';
    while(a<='z')
    {
       i=0;
       while(i<l1)
       {
              if(a==d[i])
              {
               j=0;
                   while(j<l2)
                  {
                  if(a==b[j])
                  {
                    cout<<a;
                  }
                  j++;
                  }
              }
           i++;
        }

        a++;
   }
   }
   return 0;
}
   
   
   
   
   
   
   
   
   
   
   
   
   
   
