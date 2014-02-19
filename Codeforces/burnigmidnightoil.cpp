#include <iostream>
#include <algorithm>
using namespace std;
const int inf = 1000000001;
int main(){
    int n,k,sum,tmp;
    while(cin>>n>>k){
        long long l=0, r = inf, mid;
        while(l < r){
            mid = (l + r)>>1;
            cout<<mid<<"\n";
            tmp=mid,sum=mid;
            while(tmp)
            {
                tmp/=k;
                sum+=tmp;
            }
            if(sum >= n) r = mid;
            else l = mid+1;
        }
        cout<<r<<endl;
    }
    return 0;
}
