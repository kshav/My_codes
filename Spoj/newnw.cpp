#include<iostream>
using namespace std;


int main()
{
    int n,s=0,t=0,l,flag,i,loop,m=0;
     //    vector<long long int> coll;
    long long int k;
    scanf("%d",&loop);
 while(s<loop)
 {
     scanf("%d",&n);
     int coll[n];
     t=0; 
     m=0;
     while(t<n)
     {     
           //  cout<<"\nLoop: "<<t;
           cin>>k;
           flag=1;
           for( i=0;i<m;++i)
           {   // cout<<"HI";
                if(coll[i]==k)//not working
                { // cout<<"Help";
                    flag=0;
                    coll[i]=-1;
                }
           }
           if(flag==1)
           {coll[m]=k;
           m++;}
           t++;
           //l=coll.size();         
        //   cout<<"\nColl Values: ";
        //   for(i=0;i<l;++i)
         //  cout<<coll[i]<<" ";
          // cout<<"\n\n";
        //  cout<<"\nColl size: "<<l;
      }
   // cout<<"\nColl Values: ";
        for(i=0;i<m;++i)
       {
             if(coll[i]!=-1)        
             {cout<<coll[i]<<"\n";
             break;} 
       }
       //l=coll.size();
   //  sort(coll.begin(),coll.end());
    // cout<<coll[l-1]<<"\n";
   //  coll.erase(coll.begin(),coll.end());
    s++;
 }
      system("pause");
    return 0;
}                  


