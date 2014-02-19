#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c,d,e,f,s;
    cout<<"Enter a 4 digit number: ";
    cin>>n;
    d=n%10;
    e=n/10;
    c=e%10;
    f=e/10;
    b=f%10;
    a=f/10;
    s=a+b+c+d;
    cout<<"\n Sum of its digits is: "<<s<<"\n\n";
    system("pause");
    return 0;
}
        
