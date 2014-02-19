#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
void inst(int a[],int n)
{
     int small,pos;
     for(int i=0;i<n;i++)
     {
             small=a[i];
             pos=i;
             for(int j=i+1;j<n;j++)
             {
             if(a[j]<small)
             {
             small=a[j];
             pos=j;
             }
             }
             swap(a[i],a[pos]);
     }
}
void display(int a[],int n)
{
     for(int i=0;i<n;i++)
     cout<<a[i]<<" ";
}
int main()
{
    clock_t clock_start;
    int i,n,c;
    cout<<"enter total number of elements ";
    cin>>n;
    int a[n];
    srand(time(0));
    for(i=0;i<n;i++){
    c=rand()%100;
    a[i]=c;}
    inst(a,n);
    display(a,n);
    clock_t clock_end;
    cout<<"\n"<<(clock_start-clock_end)/CLOCKS_PER_SEC<<"\n";
    system("pause");
    return 0;
}
