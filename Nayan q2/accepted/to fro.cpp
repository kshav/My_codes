#include<iostream>
using namespace std;
int main()
{
    int b,i,j,m,k=0;
    char c[100][20];
    while(1){
    cin>>b;
    if(b==0)
    break;
    else{
    string a;k=0;
    cin>>a;
    m=a.size();
    for(i=0;i<m/b;i++)
    {
     for(j=0;j<b;j++)
     {
      if(i%2==0)
       c[i][j]=a[k];
       else
       c[i][b-(j+1)]=a[k];
       k++;
      }
      }
      for(j=0;j<b;j++)
      for(i=0;i<m/b;i++)
      cout<<c[i][j];}}
    return 0;
}
