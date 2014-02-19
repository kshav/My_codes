#include<iostream>
using namespace std;
int main(){
        int n, m,j=0,k=0, sum=0, val;
        cin>>n>>m;
        int d[n];
        int localSum=0;
        for(int i=0; i<n; i++){
                cin>>d[i];
                localSum+=d[i];
                j=k;
                while(localSum>m){
                        localSum-=d[j];
                        k=j;
                        j++;
                        
                }
                sum = max(sum, localSum);
        }
        cout<<sum;
        return 0;
}

