#include<iostream>
using namespace std;
int main()
{
    int n,i,j,s=0;
    cout<<"Enter a 4 digit number: ";
    cin>>n;
    for(i=0;i<3;i++)
    {
        j=n%10;
        n=n/10;
        s=s+j;
    }
    s=s+n;
    cout<<"\n Sum of its digits is: "<<s<<"\n\n";
    system("pause");
    return 0;
}
        
