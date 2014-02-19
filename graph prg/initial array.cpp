#include<iostream>
#include<conio.h>
using namespace std;
int a[10][10];
void insert(int n)
{
 for(int i=0;i<n;i++)
 for(int j=0;j<n;j++)
 {
  if(i==j)
  a[i][j]=0;
  else
  {
  cout<<"\n if edge exit from "<<i+1<<" to "<<j+1<<" press 1 else 0";
  cin>>a[i][j];
  }
 }
}
void display(int n)
{
 for( int i=0;i<n;i++)
 {
 for(int j=0;j<n;j++)
 cout<<a[i][j]<<" ";
 cout<<"\n";
}
}
int main()
{
    int i,n;
    cout<<"enter how man node do you wnt ";
    cin>>n;
    insert(n);
    display(n);
    getch();
    return 0;
}
