#include<iostream>
#include<set>
using namespace std;


int main()
{
    int k,m,i,j,flag=0;
    float t=0,count=0,c=0;
   set<int> coll1,coll2;

    set<int> :: iterator pos;
    set<int>:: iterator pos1;
    int n;
    cin>>n;
     i=0;
    while(i<n)
    {
       cin>>k;
       coll1.insert(k);
       cin>>m;
        j=0;
        while(j<m)
        {
              cin>>k;
              coll2.insert(k);
              j++;
        }
        i++;
    }
    for(pos=coll2.begin();pos!=coll2.end();++pos)
    {
        flag=0;                                         
        for(pos1=coll1.begin();pos1!=coll1.end();++pos1)
        {
                  if(*pos==*pos1)
                  flag=1;
        }
        if(flag==0)
        count++;
    }
   cout<<count<<"\n";
 
 
    return 0;
}
