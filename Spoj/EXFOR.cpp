#include<iostream>
using namespace std;

int main()
{
    int t=0,n,a[10],count=0;
    cin>>n;
    float k,ans;
    while(t<n)
    {
       count=0;
       for(int i=0;i<10;i++)
       {cin>>a[i];
        if(a[i]==0)
        count++;}
        if(count==0 || count==1)
        ans=145;
        else{
        k=(count*(count-1))/2 + ((count)*(count-1)*(count-2))/6;
        ans=145-k;}
        if(int (ans) %2==0)
        cout<<"0\n";
        else
        cout<<"1\n";
        t++;
    }
    system("pause");
    return 0;
}       
