#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
    int n,i,j,c,f,d,count=0;
    scanf("%d",&n);
    vector<int>v;
    map<int,int>nmap;
    for(i=0;i<n;i++)
    {
                    scanf("%d%d",&c,&d);
                    v.push_back(c);
                    for(j=0;j<d;j++)
                    {
                                   scanf("%d",&f);
                                   if(nmap[f]==0)
                                   {
                                                 nmap[f]=1;
                                                 count++;
                                   }
                    }
    }
    for(i=0;i<v.size();i++)
    if(nmap[v[i]]!=0)
    count--;
    printf("%d\n",count);
}
                    
