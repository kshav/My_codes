#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{   int c,cnt=0;
    long long int n,sum=0;
    vector<int> coll;
    scanf("%lld",&n);
    for(int i=0;i<n;i++)
    {
            scanf("%d",&c);
            coll.push_back(c+1);
    }
    sort(coll.rbegin(),coll.rend());
    int i=0;
    for(int i=0;i<n;i++)
    while(sum<n)
    {
        sum+=coll[i];
        i++;
        cnt++;
    }
    cout<<cnt;
//    system("pause");
    return 0;
}          
    
