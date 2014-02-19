#include<iostream>
#include<vector>
using namespace std;

int main()
{  int flag=0,count=0;
   vector<long long int> coll;
   long long int k,sum=0,a,d,l;
   cin>>k;    
   coll.push_back(k);
   a=k; 
   while(sum!=1)
   {  sum=0;
      count++;
      while(a!=0)
      {d=a%10;
       a=a/10;
       sum=sum+d*d;
      }
      if(sum==1)
      flag=1;
      else
      {         
         l=coll.size();
         for(int i=0;i<l;i++)
         {if(coll[i]==sum)
          {flag=2;
           break;}
         }
      }
      if(flag==1)
      {cout<<count<<"\n";
      break;}
      else if(flag==2)
      {cout<<"-1"<<"\n";
       break;}
      else
      {coll.push_back(sum);
      a=sum;}
   }
   system("pause");
   return 0;
}          
