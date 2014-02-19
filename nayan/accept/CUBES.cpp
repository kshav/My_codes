#include<iostream>
using namespace std;
int main()
{
    int i,j,k,sum=1;while(sum!=101)
    {
    for(i=2;i<=100;i++)
    for(j=i;j<=100;j++)
    for(k=j;k<=100;k++)
    if(sum*sum*sum==i*i*i+j*j*j+k*k*k)
    cout<<"Cube = "<<sum<<", Triple = ("<<i<<","<<j<<","<<k<<")"<<"\n";sum++;}
    system("pause");
    return 0;
}
