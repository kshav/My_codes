#include<iostream>
using namespace std;

int fact (int n)
{
    if(n==0)
    return 1;
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
    
}


int main()
{
    int x,n,sum=0,cnt=0,j=0;
    cin>>x>>n;
    string a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int k=0;k<n;k++)
    {   
    for(int i=0,j=53;i<36 && j>35;i=i+4,j=j-2)
    {      cnt=0; 
           if(a[k][i]=='0')
           cnt++;
           if(a[k][i+1]=='0')
           cnt++;
           if(a[k][i+2]=='0')
           cnt++;
           if(a[k][i+3]=='0')
           cnt++;
           if(a[k][j]=='0')
           cnt++;
           if(a[k][j-1]=='0')
           cnt++;
           if(cnt>=x){       
           int s1=fact(cnt);
           int s2=fact(x);
           int s3=fact(cnt-x); 
           sum=sum+s1/(s2*s3);
           }}
    }
    cout<<sum;
    system("pause");
    return 0;
} 
