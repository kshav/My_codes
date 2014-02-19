#include<iostream>
using namespace std;
int main()
{
 int t,k=1;
 cin>>t;
 while(t>0)
 {
 t--;
 int n,p,i,j,flag=0,flag1=0,a=0,d=0,c=0,count=0,v;
 cin>>n>>p;
 int b[p];
 for(i=0;i<p;i++)
 b[i]=0;
 for(i=0;i<n;i++){
 int sum=0;
 for(j=0;j<p;j++){
 cin>>v;
 sum+=v;
 if(b[j]==0&&v==1){
 b[j]=1;
 count++;
 }
 }
 if(sum==0&&flag==0)
 flag=1;
 if(sum==p&&flag1==0)
 flag1=1;
 }
 if(flag==0)d=2;
 if(flag1==0)c=1;
 if(count==p)a=4;
 cout<<"Case "<<k<<": "<<a+d+c<<"\n";
 k++;
 }
 return 0;
}
