#include<iostream> 
using namespace std;int main(){int t=0,n,m,r,i=0,j=0;cin>>m;while(t<m){cin>>n;int p=n-1,w[n][n];for(i=0;i<n;i++)for(j=0;j<n;j++)w[i][j]=0;for(i=0;i<n;i++)for(j=0;j<i+1;j++)cin>>w[i][j];for(i=1;i<n;i++){for(j=0;j<i+1;j++){if(j==0)w[i][j]+=w[i-1][j];else w[i][j]+=max(w[i-1][j],w[i-1][j-1]);}}r=w[p][0];for(i=0;i<n;i++){if(w[p][i]>r)r=w[p][i];}cout<<r<<"\n";t++;}}    
