#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;

void cs(int a[],int n)
{
     int i,c[10]={0},b[n];
     for(i=0;i<n;i++)
     c[a[i]]=c[a[i]]+1;
     for(i=1;i<10;i++)
     c[i]+=c[i-1];
     for(i=n-1;i>=0;i--){
     b[c[a[i]]-1]=a[i];
     c[a[i]]--;}
     for(i=0;i<n;i++){
     a[i]=b[i];}
}
int main()
{
    int i,n;
    cout<<"Enter total number of variables ";
    cin>>n;
    int a[n];
    srand(time(0));
    for(i=0;i<n;i++)
    a[i]=rand()%10;
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    cs(a,n);
    cout<<"\n";
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    getch();
    return 0;
}
    

