#include<iostream>
#include<time.h>
using namespace std;
void inst(int a[],int n)
{
     for(int i=1;i<n;i++)
     {
     for(int j=i-1;j>=0;j--)
     {
     if(a[j+1]<a[j])
     swap(a[j+1],a[j]);
     else
     break;
     }
     }
}
void display(int a[],int n)
{
     for(int i=0;i<n;i++)
     cout<<a[i]<<" ";
}
int main()
{
    clock_t t1;
    int i,n,c;
    cout<<"enter total number of elements ";
    cin>>n;
    int a[n];
    srand(time(0));
    for(i=0;i<n;i++)
    a[i]=rand()%100;
    inst(a,n);
    display(a,n);
    clock_t t2;
    cout<<endl<<(t1-t2)/1000<<endl;
    system("pause");
    return 0;
}
