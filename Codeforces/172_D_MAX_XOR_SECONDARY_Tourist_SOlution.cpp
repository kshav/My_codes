#include<iostream>
using namespace std;
int main()
{

    int n,i,e=0,ans=0,x;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>x;
        while(e)
        {
            if((x^a[e]) > ans)
                ans=x^a[e];
            if(x>a[e])
                e--;
            else
                break;
        }
        a[++e]=x;
        //for(int k=1;k<=e;k++)
          //  cout<<a[k]<<" ";
        //cout<<endl;
    }

    cout<<ans<<endl;
}
