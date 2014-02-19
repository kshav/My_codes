#include<iostream>
#include<string.h>
using namespace std;
class table
{
             char url[4][20];
             char ip[4][20];
      public:
           void put();
        void get();
};

 void table::put()
 {
      for(int i=0;i<4;i++)
      {
      cout<<"Enter "<<i+1<< "url and ip address";
      cin>>url[i]>>ip[i];
      }
 }
 
 
 void table:: get()
 {    
        char a[20];
      cout<<"Enter the url whose ip address u want";
      cin>>a;
      for(int i=0;i<4;i++)
      {
      if (strcmp(a,url[i])==0)
      cout<<ip[i];
      }
 }
 
 
 int main()
 {
     table k;
     k.put();
     k.get();
     system("pause");
     return 0;
     }
      