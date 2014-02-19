#include<iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int b[27]={0},i;
    for(i=0;i<a.length();i++)
    b[((int)a[i])-96]++;
    for(i=0;i<a.length();i++)
    if(b[((int)a[i])-96]!=0){
    cout<<a[i]<<b[((int)a[i])-96];
    b[((int)a[i])-96]=0;
    }
    return 0;
}
