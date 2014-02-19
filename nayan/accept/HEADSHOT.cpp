#include<iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int count=0,count1=0,i,n;
    n=a.length();
    for(i=0;i<n-1;i++)
    {
                    if(a[i]=='0')
                    {
                    if(a[i+1]=='0')                
                    count++;
                    else
                    count1++;
                    }
    }
    if(a[i]=='0')
    {
                    if(a[0]=='0')                
                    count++;
                    else
                    count1++;
    }
    if(count==count1||(count==n))
    printf("EQUAL\n");
    else if(count>count1)
    printf("SHOOT\n");
    else
    printf("ROTATE\n");
}
    
                    
