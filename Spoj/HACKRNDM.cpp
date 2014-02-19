#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,k,s,count=0,l;
    vector<int> coll;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {cin>>s;
     coll.push_back(s);
    }
    sort(coll.begin(),coll.end());
    l=1;
    for(int i=0;i<n;i++)
    {
            for(int j=l;j<n;j++)
            {
                    if(coll[j]-coll[i]==k)
                    {count++;
                     l=j+1;
                     break;}
                     else if(coll[j]-coll[i]>k)
                     {l=j;
                     break;}
            }
    }
    cout<<count;
    //system("pause");
    return 0;
}
    
                     
                     
                    
