#include<iostream>
#include<deque>
using namespace std;
int main(){
        int n, m, sum=0, val;
        cin>>n>>m;
        deque<int> d;
        int localSum=0;
        for(int i=0; i<n; i++){
                cin>>val;
                d.push_back(val);
                localSum+=val;
                while(localSum>m){
                        localSum-=d[0];
                        d.pop_front();
                }
                sum = max(sum, localSum);
        }
        cout<<sum;
        return 0;
}
