#include<iostream>
#include<set>
using namespace std;

int main()
{
    int n,t=0;
    set<float> coll;
    double a,b,m;
    while(t==0)
    {
     cin>>n;
     if(n==0)
     break;
     int x[n],y[n];
     for(int i=0;i<n;i++)
     cin>>x[i]>>y[i];
    
    coll.erase(coll.begin(),coll.end()); 
    
    for(int i=0;i<n-1;i++)
    {
            for(int j=i+1;j<n;j++)
            {
                    if(x[i]!=x[j])
                    {
                        a=(x[i]-x[j])/1.0;
                        b=(y[i]-y[j])/1.0;
                        m=b/a;
                        coll.insert(m);
                    }
            }
    }
    int l=coll.size();
    cout<<l<<"\n";
    }
    //system("pause");
    return 0;
}          
