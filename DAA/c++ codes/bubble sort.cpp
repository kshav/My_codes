#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
    int n,i,flag=0;
    cout<<"Enter total number of elements";
    cin>>n;
    int a[n];
    srand(time(0));
    for(i=0;i<n;i++)
    a[i]=rand()%100;
    for(i=0;i<n&&flag==0;i++)
    {
    flag=1;
    for(int j=0;j<n-i;j++)
    {
    if(a[j]>a[j+1]){
                    flag=0;
    swap(a[j],a[j+1]);}
    }
    }
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    system("pause");
    return 0;
}
    
